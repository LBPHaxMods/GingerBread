#include "SignalComponent.h"

USignalComponent::USignalComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->signalStrength = 1.00f;
    this->HighPrioritySignalStrength = 30.00f;
}

void USignalComponent::UnregisterAttacker(EAttackType AttackType, UObject* Object) {
}

void USignalComponent::SetIsHighPriority(bool isHighPriority) {
}

void USignalComponent::SetDefaultSignalStrength(float NewSignalStrength) {
}

void USignalComponent::RegisterAttacker(EAttackType AttackType, UObject* Object) {
}

bool USignalComponent::IsJustSpawned() const {
    return false;
}

int32 USignalComponent::GetTypeMaxAttackers(EAttackType AttackType) const {
    return 0;
}

float USignalComponent::GetSignalStrength() const {
    return 0.0f;
}

bool USignalComponent::GetIsHighPriority() const {
    return false;
}

float USignalComponent::GetDefaultSignalStrength() const {
    return 0.0f;
}

FString USignalComponent::GetAttackingTable() {
    return TEXT("");
}

void USignalComponent::DisableJustSpawned() {
}

void USignalComponent::DeactivateSignal() {
}

bool USignalComponent::CurrentlyBeingAttacked(EAttackType AttackType) const {
    return false;
}

bool USignalComponent::CanBeAttacked(EAttackType AttackType) const {
    return false;
}

void USignalComponent::ActivateSignalWithDelay(float Delay) {
}

void USignalComponent::ActivateSignal() {
}


