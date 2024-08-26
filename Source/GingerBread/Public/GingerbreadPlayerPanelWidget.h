#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GingerbreadPlayerPanelActions.h"
#include "GingerbreadWidget.h"
#include "Templates/SubclassOf.h"
#include "GingerbreadPlayerPanelWidget.generated.h"

class AGingerbreadPlayerController;
class UControlScheme;
class UGingerbreadControlAssignWidget;
class ULocalCoopHUDComponent;
class UTexture2D;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UGingerbreadPlayerPanelWidget : public UGingerbreadWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UControlScheme* ControllerAssignControlScheme;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGingerbreadControlAssignWidget> ControlAssignWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGingerbreadPlayerPanelActions KeyboardActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGingerbreadPlayerPanelActions GamepadActions;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AGingerbreadPlayerController> PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULocalCoopHUDComponent* OwningCoopHUDComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsShowingControllerAssign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSwappingKeyboardMouse;
    
public:
    UGingerbreadPlayerPanelWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMissingAssignmentVisuals(bool showMissingAssignment);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateControllerVisuals(AGingerbreadPlayerController* visualController, UTexture2D* gamepadIcon, FLinearColor editBackingColour, bool isGamepadSwapped, bool hasKeyboard, bool leftAvailable, bool rightAvailable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowQuit(AGingerbreadPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowControllerAssignUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveControlAssignWidget(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void QuitDenied(AGingerbreadPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable)
    void QuitConfirmed(AGingerbreadPlayerController* Controller);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPreviousPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnNextPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnConfirmControllerSwapPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnCancelControllerSwapPressed();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsQuitShowing();
    
    UFUNCTION(BlueprintCallable)
    void HideQuitUI(AGingerbreadPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideQuit(AGingerbreadPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideControllerAssignUI();
    
    UFUNCTION(BlueprintCallable)
    FGingerbreadPlayerPanelActions GetCurrentActions();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddControlAssignWidget(UWidget* Widget);
    
};

