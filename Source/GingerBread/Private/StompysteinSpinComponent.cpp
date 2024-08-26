#include "StompysteinSpinComponent.h"
#include "Net/UnrealNetwork.h"

UStompysteinSpinComponent::UStompysteinSpinComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PitchMaxLeanAmount = 0.00f;
    this->RollMaxLeanAmount = 0.00f;
    this->MinRollSineChangePerFrame = 0.00f;
    this->MaxRollSineChangePerFrame = 0.00f;
    this->MinRollMultiplier = 0.00f;
    this->MaxRollMultiplier = 0.00f;
    this->DeviationMaximum = 0.00f;
    this->DeviationAcceleration = 0.00f;
    this->DeviationUpdateRate = 0;
    this->FirstAttackTime = 0.00f;
    this->TimeBetweenSpins = 0.00f;
    this->SpinRadius = 0.00f;
    this->SpinHeight = 0.00f;
    this->SpinZOffset = 0.00f;
    this->MaxSpinSpeed = 0.00f;
    this->SpinWindUpTimeFirstTime = 0.00f;
    this->SpinWindUpTimeFromVulnerable = 0.00f;
    this->SpinWindUpTimeFromTaunt = 0.00f;
    this->SpinGrowTime = 0.00f;
    this->SpinStayTime = 0.00f;
    this->SpinShrinkTime = 0.00f;
    this->SpinWindDownTime = 0.00f;
    this->SpinWindDownAnimAngleTolerance = 0.00f;
    this->AOEClass = NULL;
    this->SpinBounceRadius = 0.00f;
    this->SpinBounceHeight = 0.00f;
    this->SpinStartHeadDamageAuraTime = 0.00f;
    this->SpinStopHeadDamageAuraTime = 0.00f;
    this->HitNudgeDuration = 0.00f;
    this->HitNudgeMaxImpulseSize = 0.00f;
    this->AOEState = EStompysteinSpinAOEState::NotSpinning;
    this->SpinBlendspacePercentage = 0.00f;
}

void UStompysteinSpinComponent::SpawnAOE_Implementation(bool IsSpinningFromTaunt) {
}

void UStompysteinSpinComponent::OnRep_SpinBlendspacePercentage() {
}

void UStompysteinSpinComponent::Interrupt_Implementation() {
}

void UStompysteinSpinComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UStompysteinSpinComponent, AOEState);
    DOREPLIFETIME(UStompysteinSpinComponent, SpinBlendspacePercentage);
}


