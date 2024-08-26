#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "EUIScreenListPushType.h"
#include "Templates/SubclassOf.h"
#include "GingerbreadScreen.generated.h"

class AGingerbreadHUD;
class UDebugHUDComponent;
class UGingerbreadHUDComponent;
class UGingerbreadWidgetComponent;
class UPauseHUDComponent;
class UUserWidget;
class UWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGingerbreadScreen : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWidget> ScreenWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWidget> ScreenWidgetClass_PC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPauseHUDComponent* PauseHUDComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPauseHUDComponent* PauseHUDComponent_PC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDebugHUDComponent* DebugHUDComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ScreenName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ReplicateScreenPush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanReplicateScreensOnTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIScreenListPushType ScreenListPushType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ScreenListNames;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGingerbreadHUD* ParentHUD;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* RootWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGingerbreadWidgetComponent*> WidgetComponents;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGingerbreadHUDComponent*> TickingHUDComponents;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLoaded;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInitialised;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemainLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWidgetRemainsInViewport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBootScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanPauseOver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsScreenActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LastDesiredVisiblity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CurrentVisiblity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HidesWithHud;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowsLocalCoopJoining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLayeredUpon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLayeringObstructed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsObstructingLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGingerbreadHUDComponent*> PlayerCursors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowMouseWhenScreenActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowMouseForMainPlayerOnly;
    
public:
    UGingerbreadScreen(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterCursor(UGingerbreadHUDComponent* Cursor);
    
    UFUNCTION(BlueprintCallable)
    void RegisterCursor(UGingerbreadHUDComponent* Cursor);
    
    UFUNCTION(BlueprintCallable)
    bool PushThisScreen(bool LayerOnTop);
    
    UFUNCTION(BlueprintCallable)
    bool PopThisScreen(bool PopScreensAbove);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnScreenLayeredOnTop_BlueprintCall();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReturnToScreen_BlueprintCall();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReturnFromLayered_BlueprintCall();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExitScreen_BlueprintCall();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnterScreen_BlueprintCall();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTopScreen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsScreenActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBootScreen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScreenLayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsObstructingLayers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsLayered() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableHUDTick(UGingerbreadHUDComponent* HUDComponent, bool bTick);
    
    UFUNCTION(BlueprintCallable)
    bool CanPauseOver();
    
};

