#include "GingerbreadLoadingWidget.h"

UGingerbreadLoadingWidget::UGingerbreadLoadingWidget() {
    this->LoadingStateResetAnim = NULL;
    this->LoadingStateLoopedAnim = NULL;
    this->AutoToolTipSelection = true;
    this->m_pGameInstance = NULL;
    this->m_pSettings = NULL;
    this->m_pTable = NULL;
}

void UGingerbreadLoadingWidget::SetupTooltipSelection() {
}

void UGingerbreadLoadingWidget::SetupControlScheme(bool bEnable) {
}


void UGingerbreadLoadingWidget::SetLoadingScreenState_Implementation(const FLoadingScreenState& NewState) {
}


int32 UGingerbreadLoadingWidget::GetNumberOfTips() const {
    return 0;
}

void UGingerbreadLoadingWidget::ApplyOrGenerateTooltip(bool ShouldGenerate) {
}


