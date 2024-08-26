#include "StickerBookStickerWidget.h"

UStickerBookStickerWidget::UStickerBookStickerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->StickerTexture = NULL;
    this->StickerParameterName = TEXT("MaskTexture");
    this->StrokeAmount = 0.10f;
    this->LockedStrokeAmount = 0.10f;
    this->StrokeParameterName = TEXT("StrokeAmount");
    this->SkipStickerUnlock = false;
    this->IsUnlocked = false;
    this->IsUnlockable = false;
    this->UnlockAnimation = NULL;
}



void UStickerBookStickerWidget::SetUnlocked(bool Unlocked, bool animate) {
}

void UStickerBookStickerWidget::SetStrokeAmount(float newAmount) {
}

void UStickerBookStickerWidget::SetLockedStrokeAmount(float newAmount) {
}


void UStickerBookStickerWidget::RefreshStickerMaterials() {
}

void UStickerBookStickerWidget::OnStickerAnimatedOn() {
}

void UStickerBookStickerWidget::OnParentPageDeactivated_Implementation() {
}

bool UStickerBookStickerWidget::GetSkipsUnlock() const {
    return false;
}

bool UStickerBookStickerWidget::GetIsUnlocked() const {
    return false;
}

bool UStickerBookStickerWidget::GetIsUnlockable() const {
    return false;
}


