#include "TimerHUDComponent.h"

UTimerHUDComponent::UTimerHUDComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugEnabled = false;
    this->TimeAdjustmentLerpTime = 1.00f;
    this->UnravelMeshUpdateFrequency = 0.10f;
    this->FailAudioEvent = NULL;
    this->FlipAudioEvent = NULL;
    this->PullUpAudioEvent = NULL;
    this->Collection = NULL;
    this->bIsEsportsLevel = false;
}

void UTimerHUDComponent::StopTimer() {
}

void UTimerHUDComponent::StartTimer(bool ticksSelf) {
}

void UTimerHUDComponent::SetTimerState(EUITimerCountType timerState) {
}

void UTimerHUDComponent::SetTimerActorVisibility(bool visible) {
}

void UTimerHUDComponent::SetTime(float Seconds, bool instant) {
}

void UTimerHUDComponent::SetTierTimesFromSeconds(float goldSeconds, float silverSeconds, float bronzeSeconds) {
}

void UTimerHUDComponent::SetTierTimes(FTimespan gold, FTimespan silver, FTimespan bronze) {
}

void UTimerHUDComponent::SetOutroPlayRate(float outroPlayRate) {
}

void UTimerHUDComponent::RemoveAllInWorldWidgets() {
}

void UTimerHUDComponent::PostIntroAnim() {
}

void UTimerHUDComponent::PlayTimeAdjustment(float secondsAdjustment, FVector adjustmentSource) {
}

void UTimerHUDComponent::OnOffscreenReachedEvent() {
}

void UTimerHUDComponent::OnHalfSpinReached() {
}

void UTimerHUDComponent::OnCenterReachedEvent_Delay() {
}

void UTimerHUDComponent::OnCenterReachedEvent() {
}

void UTimerHUDComponent::OnAdjustmentActorLifetimeOver(A3DUI_TimerAdjustmentTime* adjustmentActor) {
}

void UTimerHUDComponent::IsTimerCounting(bool& isCounting) {
}

void UTimerHUDComponent::IsInIntroState(bool& inIntro) {
}

void UTimerHUDComponent::IsEnabled(bool& NewIsEnabled) {
}

void UTimerHUDComponent::EndIntro() {
}

void UTimerHUDComponent::EnableTimerHud(bool playIntro) {
}

void UTimerHUDComponent::AnimateToCenter() {
}


