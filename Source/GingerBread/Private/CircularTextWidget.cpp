#include "CircularTextWidget.h"

UCircularTextWidget::UCircularTextWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Radius = 50.00f;
    this->bUseRadiusLimit = false;
    this->LimitRadiusWhenTextSizeYExceedes = 65.00f;
    this->CircularMaterial = NULL;
    this->MaxRetainerSize = 1024.00f;
    this->mpRetainerBox = NULL;
    this->mpRetainerCanvas = NULL;
    this->mpTextBlock = NULL;
}


float UCircularTextWidget::TextAngle() const {
    return 0.0f;
}

FVector2D UCircularTextWidget::StringSize() const {
    return FVector2D{};
}

void UCircularTextWidget::SetText(FText NewText) {
}

void UCircularTextWidget::OnTextChanged_Implementation() {
}

float UCircularTextWidget::Circumference() const {
    return 0.0f;
}



