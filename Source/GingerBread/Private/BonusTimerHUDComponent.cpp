#include "BonusTimerHUDComponent.h"

UBonusTimerHUDComponent::UBonusTimerHUDComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PulseTime = 5.00f;
    this->BlurSequence = NULL;
}

bool UBonusTimerHUDComponent::StartEndSequence() {
    return false;
}

void UBonusTimerHUDComponent::SetTime(float NewTime) {
}

void UBonusTimerHUDComponent::ResetTimer() {
}

void UBonusTimerHUDComponent::OnEndSequenceToCentre_Delay() {
}

void UBonusTimerHUDComponent::OnEndSequenceToCentre() {
}

void UBonusTimerHUDComponent::OnEndSequenceFinished() {
}

void UBonusTimerHUDComponent::ActivateBonusTimer(float CurrentTime, float totalTime, EUITimerCountType updateType) {
}


