#include "GingerbreadSessionPlayerWidget.h"

UGingerbreadSessionPlayerWidget::UGingerbreadSessionPlayerWidget() {
    this->VoiceStoppedDelay = 2.00f;
    this->IsPlayerTalking = false;
}

void UGingerbreadSessionPlayerWidget::SetTargetSackboy_Implementation(ASackboy* TargetSackboy) {
}

void UGingerbreadSessionPlayerWidget::SetMutePlayer(bool IsMuted) {
}



void UGingerbreadSessionPlayerWidget::KickPlayer() {
}

bool UGingerbreadSessionPlayerWidget::IsSackboyLocal(ASackboy* playerSackboy) {
    return false;
}

float UGingerbreadSessionPlayerWidget::GetPlayerConnectionQuality() const {
    return 0.0f;
}

ASackboy* UGingerbreadSessionPlayerWidget::GetLocalSackboy() const {
    return NULL;
}

bool UGingerbreadSessionPlayerWidget::GetIfPlayerMuted() const {
    return false;
}

bool UGingerbreadSessionPlayerWidget::CanKickPlayer() const {
    return false;
}


