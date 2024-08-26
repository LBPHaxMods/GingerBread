#include "GingerbreadPlayerPanelWidget.h"

UGingerbreadPlayerPanelWidget::UGingerbreadPlayerPanelWidget() {
    this->ControllerAssignControlScheme = NULL;
    this->ControlAssignWidgetClass = NULL;
    this->OwningCoopHUDComponent = NULL;
    this->IsShowingControllerAssign = false;
    this->IsSwappingKeyboardMouse = false;
}






void UGingerbreadPlayerPanelWidget::QuitDenied(AGingerbreadPlayerController* Controller) {
}

void UGingerbreadPlayerPanelWidget::QuitConfirmed(AGingerbreadPlayerController* Controller) {
}

void UGingerbreadPlayerPanelWidget::OnPreviousPressed() {
}

void UGingerbreadPlayerPanelWidget::OnNextPressed() {
}

void UGingerbreadPlayerPanelWidget::OnConfirmControllerSwapPressed() {
}

void UGingerbreadPlayerPanelWidget::OnCancelControllerSwapPressed() {
}


void UGingerbreadPlayerPanelWidget::HideQuitUI(AGingerbreadPlayerController* Controller) {
}



FGingerbreadPlayerPanelActions UGingerbreadPlayerPanelWidget::GetCurrentActions() {
    return FGingerbreadPlayerPanelActions{};
}



