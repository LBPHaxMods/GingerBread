#include "StickerBookPageWidget.h"

UStickerBookPageWidget::UStickerBookPageWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->TitleWidgetName = TEXT("MemoryPageName");
    this->TitleWidget = NULL;
    this->PageNumberWidgetName = TEXT("MemoryPageCounter");
    this->PageNumberWidget = NULL;
    this->PageIconWidgetName = TEXT("MemoryPageWorldBadge");
    this->PageIconWidget = NULL;
}

void UStickerBookPageWidget::SetPageInfo_Implementation(const FText& PageTitle, bool IsPageUnknown, int32 PageNumber, int32 NumPages, UTexture2D* PageIcon) {
}

void UStickerBookPageWidget::OnPageDeactivated_Implementation() {
}

bool UStickerBookPageWidget::IsPageCompleted() const {
    return false;
}


