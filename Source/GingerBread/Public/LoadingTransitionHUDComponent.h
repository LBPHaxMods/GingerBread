#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "ELoadingType.h"
#include "GingerbreadHUDComponent.h"
#include "LoadingPersistentState.h"
#include "LoadingScreenState.h"
#include "LoadingTransitionCompleteDelegate.h"
#include "LoadingTransitionHUDComponent.generated.h"

class UGingerbreadLoadingWidget;
class ULoadingTransitionHUDComponent;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ULoadingTransitionHUDComponent : public UGingerbreadHUDComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadingTransitionComplete TransitionCompleteDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WantRetry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LevelToLoadName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SpawnPointName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool disableLevelIntroSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InSummaryScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InBonusLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ExitingSummaryScreen;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGingerbreadLoadingWidget* mpMyLoadingWidget;
    
public:
    ULoadingTransitionHUDComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopTransition();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartTransition();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowRestartHUD();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowLoadingScreenInstantly();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowContinueHUD();
    
public:
    UFUNCTION(BlueprintCallable)
    static void SetPersistentLoadingScreenState(const FLoadingPersistentState& NewState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetOverlayObjectsVisibleOnLoad(bool visible);
    
public:
    UFUNCTION(BlueprintCallable)
    static void SetLoadingSpinnerShown(bool Shown);
    
    UFUNCTION(BlueprintCallable)
    static void SetJoiningNetworkTextShown(bool Shown);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ProcessClientStartTransition();
    
    UFUNCTION(BlueprintCallable)
    void ProcessClientStartSummary();
    
public:
    UFUNCTION(BlueprintCallable)
    void PrepareToRetry();
    
    UFUNCTION(BlueprintCallable)
    void PrepareToLoadLevel(const FString& level_name, const FString& spawn_point_name, bool disable_level_intro_sequence, ELoadingType loadType);
    
    UFUNCTION(BlueprintCallable)
    void PrepareMapReturn();
    
    UFUNCTION(BlueprintCallable)
    void OnTransitionComplete();
    
    UFUNCTION(BlueprintCallable)
    void OnPreClientTravel(const FString& PendingURL, TEnumAsByte<ETravelType> TravelType, bool bIsSeamlessTravel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsScreenVisible();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsScreenShowing();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJoiningGame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClientReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTransitioned() const;
    
    UFUNCTION(BlueprintCallable)
    static FLoadingPersistentState GetPersistentLoadingScreenState();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOverlayObjectsVisibleOnLoad() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELoadingType GetLoadingType() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULoadingTransitionHUDComponent* GetLoadingTransitionHUD(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool GetLoadingSpinnerShown();
    
    UFUNCTION(BlueprintCallable)
    bool GetLevelLoadingState(const FString& MapName, FLoadingScreenState& LevelLoadingState);
    
    UFUNCTION(BlueprintCallable)
    static bool GetJoiningNetworkTextShown();
    
    UFUNCTION(BlueprintCallable)
    void EnableRestartHUD(bool Retry);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnableBonusSummary();
    
    UFUNCTION(BlueprintCallable)
    void ClientStartLoadingTransition(const FString& level_name, ELoadingType loadType);
    
    UFUNCTION(BlueprintCallable)
    void ClientShowSummaryScreen();
    
};

