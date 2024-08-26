#include "PSNLinkWidget.h"

UPSNLinkWidget::UPSNLinkWidget() {
    this->LinkState = EPSNLinkState::UnLinked;
    this->QRTexture2D = NULL;
}

void UPSNLinkWidget::UpdateQRCode() {
}



void UPSNLinkWidget::StartPSNUnlink() {
}

void UPSNLinkWidget::StartPSNLink() {
}

void UPSNLinkWidget::OnUpdateRegisterPSNAccount(bool bWasSuccessful) {
}

void UPSNLinkWidget::OnUpdateQRCode(bool bWasSuccessful, const FString& URL) {
}

void UPSNLinkWidget::ManualTick(float InDeltaTime) {
}

void UPSNLinkWidget::LaunchURL(bool bWasSuccessful, const FString& URL) {
}

bool UPSNLinkWidget::IsPSNLinkEnabled() {
    return false;
}

void UPSNLinkWidget::DeregisterComplete(bool bWasSuccessful) {
}


