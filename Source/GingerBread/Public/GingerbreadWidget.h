#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"
#include "EAction.h"
#include "EUINavigationDirection.h"
#include "GingerbreadPlayerId.h"
#include "OnActiveWidgetChangedDelegate.h"
#include "GingerbreadWidget.generated.h"

class AGingerbreadPlayerController;
class ALevelSequenceActor;
class ASackboy;
class UControlComponent;
class UControlScheme;
class UGingerbreadHUDComponent;
class UGingerbreadWidgetElement;
class ULevelSequence;
class ULevelSequencePlayer;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UGingerbreadWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE(FOnWidgetAction);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActiveWidgetChanged OnActiveWidgetChanged;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialHeldStaggerDelays[12];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float SubsequentHeldStaggerDelays[12];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsHiddenByScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility DesiredVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* activeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* PostProcessActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequencePlayer* PostProcessSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGingerbreadPlayerController*> BoundControllers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ControllersBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MouseInputEnabled;
    
public:
    UGingerbreadWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateStaggeredActionTimer(EAction staggeredAction, UWidget* NewActiveWidget);
    
    UFUNCTION(BlueprintCallable)
    void Up_Released(AGingerbreadPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void Up_In(AGingerbreadPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void Up_Held(AGingerbreadPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void UnBindWidgetCallaback(UWidget* theWidget);
    
    UFUNCTION(BlueprintCallable)
    void UnBindGeneralCallback(EAction theAction);
    
    UFUNCTION(BlueprintCallable)
    void UnBindAllWidgetCallabacks();
    
    UFUNCTION(BlueprintCallable)
    void UnBindAllGeneralCallbacks();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SwapActiveWidget(UWidget* NewActiveWidget, EUINavigationDirection NavigationDirection);
    
    UFUNCTION(BlueprintCallable)
    void SetupMenuControllers(bool Bind);
    
    UFUNCTION(BlueprintCallable)
    void SetOwnerPlayerController(AGingerbreadPlayerController* OwnerPlayerController, bool AlsoSetChildren);
    
    UFUNCTION(BlueprintCallable)
    void Select_Released(AGingerbreadPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void Select_In(AGingerbreadPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void Select_Held(AGingerbreadPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void SecondaryMisc_Released(AGingerbreadPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void SecondaryMisc_In(AGingerbreadPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void SecondaryMisc_Held(AGingerbreadPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void Right_Released(AGingerbreadPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void Right_In(AGingerbreadPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void Right_Held(AGingerbreadPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void ResetStaggeredActionTimer(EAction staggeredAction);
    
    UFUNCTION(BlueprintCallable)
    void ResetPostProcess();
    
    UFUNCTION(BlueprintCallable)
    bool PushUIControlScheme(UControlComponent* ControlComponent, const UControlScheme* ControlScheme);
    
    UFUNCTION(BlueprintCallable)
    void PrimaryMisc_Released(AGingerbreadPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void PrimaryMisc_In(AGingerbreadPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void PrimaryMisc_Held(AGingerbreadPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void PreviousPage_Released(AGingerbreadPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void PreviousPage_In(AGingerbreadPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void PreviousPage_Held(AGingerbreadPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void Previous_Released(AGingerbreadPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void Previous_In(AGingerbreadPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void Previous_Held(AGingerbreadPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void NextPage_Released(AGingerbreadPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void NextPage_In(AGingerbreadPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void NextPage_Held(AGingerbreadPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void Next_Released(AGingerbreadPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void Next_In(AGingerbreadPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void Next_Held(AGingerbreadPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void MouseHoverWidget(UGingerbreadWidgetElement* NewActiveWidget, bool IgnorePlayingAnimations);
    
    UFUNCTION(BlueprintCallable)
    void Left_Released(AGingerbreadPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void Left_In(AGingerbreadPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void Left_Held(AGingerbreadPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASackboy* GetSackboy() const;
    
    UFUNCTION(BlueprintCallable)
    void GetPlayerController(bool& PlayerControllerValid, AGingerbreadPlayerController*& OwnerPlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGingerbreadHUDComponent* GetOwningComponent() const;
    
    UFUNCTION(BlueprintCallable)
    AGingerbreadPlayerController* GetOwnerPlayerController();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGingerbreadPlayerId GetGingerBreadPlayerId() const;
    
    UFUNCTION(BlueprintCallable)
    EUINavigationDirection FindDirectionToWidget(UGingerbreadWidgetElement* TargetWidget);
    
    UFUNCTION(BlueprintCallable)
    bool ExecuteWidgetCallback(UWidget* theWidget, EAction theAction);
    
    UFUNCTION(BlueprintCallable)
    bool ExecuteGeneralCallback(EAction theAction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnableWidget(bool Show);
    
    UFUNCTION(BlueprintCallable)
    void EnablePostProcessing(bool Enable, bool BlurScreen, ULevelSequence* LevelSequence);
    
    UFUNCTION(BlueprintCallable)
    void Down_Released(AGingerbreadPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void Down_In(AGingerbreadPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void Down_Held(AGingerbreadPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeVisibility(bool Show);
    
    UFUNCTION(BlueprintCallable)
    void BindWidgetToCallaback(UWidget* theWidget, const UGingerbreadWidget::FOnWidgetAction& theActionCallback, EAction theAction);
    
    UFUNCTION(BlueprintCallable)
    void BindInputController(bool Bind, AGingerbreadPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void BindGeneralCallback(const UGingerbreadWidget::FOnWidgetAction& theActionCallback, EAction theAction);
    
    UFUNCTION(BlueprintCallable)
    void Back_Released(AGingerbreadPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void Back_In(AGingerbreadPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void Back_Held(AGingerbreadPlayerController* PlayerController);
    
};

