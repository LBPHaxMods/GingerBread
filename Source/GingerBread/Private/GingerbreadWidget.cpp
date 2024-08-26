#include "GingerbreadWidget.h"

UGingerbreadWidget::UGingerbreadWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->InitialHeldStaggerDelays[0] = 0.50f;
    this->InitialHeldStaggerDelays[1] = 0.50f;
    this->InitialHeldStaggerDelays[2] = 0.50f;
    this->InitialHeldStaggerDelays[3] = 0.50f;
    this->InitialHeldStaggerDelays[4] = 0.50f;
    this->InitialHeldStaggerDelays[5] = 0.50f;
    this->InitialHeldStaggerDelays[6] = 0.50f;
    this->InitialHeldStaggerDelays[7] = 0.50f;
    this->InitialHeldStaggerDelays[8] = 0.50f;
    this->InitialHeldStaggerDelays[9] = 0.50f;
    this->InitialHeldStaggerDelays[10] = 0.50f;
    this->InitialHeldStaggerDelays[11] = 0.50f;
    this->SubsequentHeldStaggerDelays[0] = 0.30f;
    this->SubsequentHeldStaggerDelays[1] = 0.30f;
    this->SubsequentHeldStaggerDelays[2] = 0.30f;
    this->SubsequentHeldStaggerDelays[3] = 0.30f;
    this->SubsequentHeldStaggerDelays[4] = 0.30f;
    this->SubsequentHeldStaggerDelays[5] = 0.30f;
    this->SubsequentHeldStaggerDelays[6] = 0.30f;
    this->SubsequentHeldStaggerDelays[7] = 0.30f;
    this->SubsequentHeldStaggerDelays[8] = 0.30f;
    this->SubsequentHeldStaggerDelays[9] = 0.30f;
    this->SubsequentHeldStaggerDelays[10] = 0.30f;
    this->SubsequentHeldStaggerDelays[11] = 0.30f;
    this->IsHiddenByScreen = false;
    this->DesiredVisibility = ESlateVisibility::Visible;
    this->activeWidget = NULL;
    this->PostProcessActor = NULL;
    this->PostProcessSequence = NULL;
    this->ControllersBound = false;
    this->MouseInputEnabled = true;
}

void UGingerbreadWidget::UpdateStaggeredActionTimer(EAction staggeredAction, UWidget* NewActiveWidget) {
}

void UGingerbreadWidget::Up_Released(AGingerbreadPlayerController* PlayerController) {
}

void UGingerbreadWidget::Up_In(AGingerbreadPlayerController* PlayerController) {
}

void UGingerbreadWidget::Up_Held(AGingerbreadPlayerController* PlayerController) {
}

void UGingerbreadWidget::UnBindWidgetCallaback(UWidget* theWidget) {
}

void UGingerbreadWidget::UnBindGeneralCallback(EAction theAction) {
}

void UGingerbreadWidget::UnBindAllWidgetCallabacks() {
}

void UGingerbreadWidget::UnBindAllGeneralCallbacks() {
}

void UGingerbreadWidget::SwapActiveWidget_Implementation(UWidget* NewActiveWidget, EUINavigationDirection NavigationDirection) {
}

void UGingerbreadWidget::SetupMenuControllers(bool Bind) {
}

void UGingerbreadWidget::SetOwnerPlayerController(AGingerbreadPlayerController* OwnerPlayerController, bool AlsoSetChildren) {
}

void UGingerbreadWidget::Select_Released(AGingerbreadPlayerController* PlayerController) {
}

void UGingerbreadWidget::Select_In(AGingerbreadPlayerController* PlayerController) {
}

void UGingerbreadWidget::Select_Held(AGingerbreadPlayerController* PlayerController) {
}

void UGingerbreadWidget::SecondaryMisc_Released(AGingerbreadPlayerController* PlayerController) {
}

void UGingerbreadWidget::SecondaryMisc_In(AGingerbreadPlayerController* PlayerController) {
}

void UGingerbreadWidget::SecondaryMisc_Held(AGingerbreadPlayerController* PlayerController) {
}

void UGingerbreadWidget::Right_Released(AGingerbreadPlayerController* PlayerController) {
}

void UGingerbreadWidget::Right_In(AGingerbreadPlayerController* PlayerController) {
}

void UGingerbreadWidget::Right_Held(AGingerbreadPlayerController* PlayerController) {
}

void UGingerbreadWidget::ResetStaggeredActionTimer(EAction staggeredAction) {
}

void UGingerbreadWidget::ResetPostProcess() {
}

bool UGingerbreadWidget::PushUIControlScheme(UControlComponent* ControlComponent, const UControlScheme* ControlScheme) {
    return false;
}

void UGingerbreadWidget::PrimaryMisc_Released(AGingerbreadPlayerController* PlayerController) {
}

void UGingerbreadWidget::PrimaryMisc_In(AGingerbreadPlayerController* PlayerController) {
}

void UGingerbreadWidget::PrimaryMisc_Held(AGingerbreadPlayerController* PlayerController) {
}

void UGingerbreadWidget::PreviousPage_Released(AGingerbreadPlayerController* PlayerController) {
}

void UGingerbreadWidget::PreviousPage_In(AGingerbreadPlayerController* PlayerController) {
}

void UGingerbreadWidget::PreviousPage_Held(AGingerbreadPlayerController* PlayerController) {
}

void UGingerbreadWidget::Previous_Released(AGingerbreadPlayerController* PlayerController) {
}

void UGingerbreadWidget::Previous_In(AGingerbreadPlayerController* PlayerController) {
}

void UGingerbreadWidget::Previous_Held(AGingerbreadPlayerController* PlayerController) {
}

void UGingerbreadWidget::NextPage_Released(AGingerbreadPlayerController* PlayerController) {
}

void UGingerbreadWidget::NextPage_In(AGingerbreadPlayerController* PlayerController) {
}

void UGingerbreadWidget::NextPage_Held(AGingerbreadPlayerController* PlayerController) {
}

void UGingerbreadWidget::Next_Released(AGingerbreadPlayerController* PlayerController) {
}

void UGingerbreadWidget::Next_In(AGingerbreadPlayerController* PlayerController) {
}

void UGingerbreadWidget::Next_Held(AGingerbreadPlayerController* PlayerController) {
}

void UGingerbreadWidget::MouseHoverWidget(UGingerbreadWidgetElement* NewActiveWidget, bool IgnorePlayingAnimations) {
}

void UGingerbreadWidget::Left_Released(AGingerbreadPlayerController* PlayerController) {
}

void UGingerbreadWidget::Left_In(AGingerbreadPlayerController* PlayerController) {
}

void UGingerbreadWidget::Left_Held(AGingerbreadPlayerController* PlayerController) {
}

ASackboy* UGingerbreadWidget::GetSackboy() const {
    return NULL;
}

void UGingerbreadWidget::GetPlayerController(bool& PlayerControllerValid, AGingerbreadPlayerController*& OwnerPlayerController) {
}

UGingerbreadHUDComponent* UGingerbreadWidget::GetOwningComponent() const {
    return NULL;
}

AGingerbreadPlayerController* UGingerbreadWidget::GetOwnerPlayerController() {
    return NULL;
}

FGingerbreadPlayerId UGingerbreadWidget::GetGingerBreadPlayerId() const {
    return FGingerbreadPlayerId{};
}

EUINavigationDirection UGingerbreadWidget::FindDirectionToWidget(UGingerbreadWidgetElement* TargetWidget) {
    return EUINavigationDirection::NoDirection;
}

bool UGingerbreadWidget::ExecuteWidgetCallback(UWidget* theWidget, EAction theAction) {
    return false;
}

bool UGingerbreadWidget::ExecuteGeneralCallback(EAction theAction) {
    return false;
}


void UGingerbreadWidget::EnablePostProcessing(bool Enable, bool BlurScreen, ULevelSequence* LevelSequence) {
}

void UGingerbreadWidget::Down_Released(AGingerbreadPlayerController* PlayerController) {
}

void UGingerbreadWidget::Down_In(AGingerbreadPlayerController* PlayerController) {
}

void UGingerbreadWidget::Down_Held(AGingerbreadPlayerController* PlayerController) {
}


void UGingerbreadWidget::BindWidgetToCallaback(UWidget* theWidget, const UGingerbreadWidget::FOnWidgetAction& theActionCallback, EAction theAction) {
}

void UGingerbreadWidget::BindInputController(bool Bind, AGingerbreadPlayerController* PlayerController) {
}

void UGingerbreadWidget::BindGeneralCallback(const UGingerbreadWidget::FOnWidgetAction& theActionCallback, EAction theAction) {
}

void UGingerbreadWidget::Back_Released(AGingerbreadPlayerController* PlayerController) {
}

void UGingerbreadWidget::Back_In(AGingerbreadPlayerController* PlayerController) {
}

void UGingerbreadWidget::Back_Held(AGingerbreadPlayerController* PlayerController) {
}


