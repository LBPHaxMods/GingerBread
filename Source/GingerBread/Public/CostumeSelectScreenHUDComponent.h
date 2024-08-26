#pragma once
#include "CoreMinimal.h"
#include "EPlayerJoinDirection.h"
#include "EUICostumeSelectState.h"
#include "GingerbreadHUDComponent.h"
#include "GingerbreadPlayerId.h"
#include "Templates/SubclassOf.h"
#include "CostumeSelectScreenHUDComponent.generated.h"

class UCostumeSelectorWindowHUDComponent;
class UGingerbreadWidget;
class UUserWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCostumeSelectScreenHUDComponent : public UGingerbreadHUDComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCostumeSelectorWindowHUDComponent> CostumeSelectorBPClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCostumeSelectorWindowHUDComponent*> CostumeSelectors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExitCostumeScreenDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LoadIntoLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PersitentScreenName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnabled_New;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* RootWidget;
    
public:
    UCostumeSelectScreenHUDComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    UCostumeSelectorWindowHUDComponent* UpdateCostumeSelectorWindowComponent(UUserWidget* Layout, UGingerbreadWidget* costumeSelectorWidget);
    
    UFUNCTION(BlueprintCallable)
    void TransitionToLoadingScreen();
    
    UFUNCTION(BlueprintCallable)
    void SetFlowInsufficientPlayers();
    
    UFUNCTION(BlueprintCallable)
    void SetFlowExiting();
    
    UFUNCTION(BlueprintCallable)
    void ResetCurrentSelectorWidgets();
    
    UFUNCTION(BlueprintCallable)
    void ResetCostumeSelectors();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshScreenLayout();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayersReadyToPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayersNotReadyToPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionToLoadScreen();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerStateLeft(FGingerbreadPlayerId PlayerId, EUICostumeSelectState Leftstate);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerStateEntered(FGingerbreadPlayerId PlayerId, EUICostumeSelectState Enteredstate);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerPressSelect(FGingerbreadPlayerId PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerPressBack(FGingerbreadPlayerId PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerJoinLeaveEvent(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& player_id, bool IsForcedPlayer);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPlayerChangeCostume(FGingerbreadPlayerId PlayerId, const FName CostumeNameID, bool IsHanger);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnJoinedPlayerCountChanged(int32 Count);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnCostumeScreenChanged(FGingerbreadPlayerId PlayerId, uint8 ScreenID);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnControllerConnectionChangeEvent(bool bIsConnected, int32 SomeValue, int32 ControllerIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsScreenReady();
    
    UFUNCTION(BlueprintCallable)
    void ExitCostumeSelection();
    
    UFUNCTION(BlueprintCallable)
    void EnableCostumeSelectorComponents(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateScene();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseFrontendHUD();
    
};

