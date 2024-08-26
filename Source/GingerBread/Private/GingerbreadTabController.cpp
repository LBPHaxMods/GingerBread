#include "GingerbreadTabController.h"

UGingerbreadTabController::UGingerbreadTabController() {
    this->LeftTabbedSlot = NULL;
    this->RightTabbedSlot = NULL;
    this->LeftSlotAnimation = NULL;
    this->RightSlotAnimation = NULL;
}

FUITabData UGingerbreadTabController::SwapToTabByName(FName TabName) {
    return FUITabData{};
}

FUITabData UGingerbreadTabController::SwapToPreviousTab() {
    return FUITabData{};
}

FUITabData UGingerbreadTabController::SwapToNextTab() {
    return FUITabData{};
}

void UGingerbreadTabController::InitTabController(UPanelWidget* LeftPanelTab, UPanelWidget* RightPanelTab, UWidgetAnimation* LeftEnterAnim, UWidgetAnimation* RightEnterAnim) {
}

FUITabData UGingerbreadTabController::GetTabData(FName TabName) const {
    return FUITabData{};
}

FUITabData UGingerbreadTabController::GetPreviousTabData() const {
    return FUITabData{};
}

FUITabData UGingerbreadTabController::GetNextTabData() const {
    return FUITabData{};
}

FUITabData UGingerbreadTabController::GetCurrentTabData() const {
    return FUITabData{};
}

TArray<FUITabData> UGingerbreadTabController::GetAllTabData() const {
    return TArray<FUITabData>();
}

bool UGingerbreadTabController::DoesTabExist(FName TabName) {
    return false;
}

void UGingerbreadTabController::AddWidgetTab(FName TabName, UWidget* WidgetTabHeader, UWidget* WidgetTabPage) {
}


