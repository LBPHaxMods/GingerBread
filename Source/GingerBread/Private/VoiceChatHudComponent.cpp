#include "VoiceChatHudComponent.h"

UVoiceChatHudComponent::UVoiceChatHudComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StopTalkingDelay = 0.50f;
    this->DefaultVoicePosition = EVoiceIndicatorPositionType::BottomRight;
}

void UVoiceChatHudComponent::SetVoicePosition(FName ScreenName, EVoiceIndicatorPositionType PositionType) {
}


void UVoiceChatHudComponent::SetRequestShowAllowed(FName ScreenName, bool IsAllowed) {
}

void UVoiceChatHudComponent::ScreenPush(UGingerbreadScreen* pPushedScreen) {
}

void UVoiceChatHudComponent::ScreenPop(UGingerbreadScreen* pPoppedScreen) {
}

void UVoiceChatHudComponent::ResetVoicePosition(FName ScreenName) {
}

bool UVoiceChatHudComponent::IsAnyPlayerTalking() const {
    return false;
}

EVoiceIndicatorPositionType UVoiceChatHudComponent::GetVoicePosition(FName ScreenName) const {
    return EVoiceIndicatorPositionType::TopLeft;
}

bool UVoiceChatHudComponent::GetRequestShowAllowed(FName ScreenName) const {
    return false;
}

EVoiceIndicatorPositionType UVoiceChatHudComponent::GetCurrentVoicePosition() const {
    return EVoiceIndicatorPositionType::TopLeft;
}

bool UVoiceChatHudComponent::GetCurrentRequestShowAllowed() const {
    return false;
}


