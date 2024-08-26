#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "HudAmbientMovementSettings.h"
#include "Templates/SubclassOf.h"
#include "GingerbreadHUDComponent.generated.h"

class AGingerbreadHUD;
class AHudActor3D;
class UGingerbreadScreen;
class UGingerbreadWidget;
class UUserWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGingerbreadHUDComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WidgetNameInMainHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHudActor3D> Desired3DHudActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHudAmbientMovementSettings HudActorAmbientSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisallowLayeringOnTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGingerbreadScreen* Screen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGingerbreadWidget* MyWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHudActor3D* My3DActor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TickRefCount;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TicksWhenPaused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SelfSetsOwnedWidget;
    
public:
    UGingerbreadHUDComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWidgetNameInMainHUD(FName widgetName);
    
    UFUNCTION(BlueprintCallable)
    void SetIsAmbientMovementEnabled(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetIfSelfSetsOwnedWidget(bool SelfSets);
    
    UFUNCTION(BlueprintCallable)
    void SetDisallowLayering(bool Disallowed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTickHUD(float FrameTimeSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRootWidgetCreated_BlueprintEvent(AGingerbreadHUD* HUD, UUserWidget* Root);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReturnToScreen_BlueprintCall();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExitScreen_BlueprintCall();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnterScreen_BlueprintCall();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLayeredUpon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInTopScreen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHudTickEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTopScreen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGingerbreadWidget* GetWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTicksWhenPaused() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGingerbreadScreen* GetScreen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsAmbientMovementEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGingerbreadHUD* GetHUD() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AHudActor3D> GetDesired3DHudActorClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHudActor3D* Get3DHudActor() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableHUDTick(bool bTick);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DisallowsLayering() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeVisibility(bool IsVisible);
    
};

