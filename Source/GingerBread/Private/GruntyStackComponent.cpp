#include "GruntyStackComponent.h"
#include "Net/UnrealNetwork.h"

UGruntyStackComponent::UGruntyStackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StackState = EGruntyStackBehaviourState::NotStacked;
    this->StackPosition = EGruntyStackPosition::Invalid;
    this->TimberPreDamageTime = 0.16f;
    this->TimberPostDamagePreDetachTime = 0.28f;
    this->TimberPostDetachPreRecoveryTime = 0.50f;
    this->TimberLandAnimTime = 0.75f;
    this->TimberRecoveryTime = 0.50f;
    this->TimberThrowDistConstOffset = 3.00f;
    this->TimberThrowDistBetweenGruntys = 12.00f;
}

void UGruntyStackComponent::StartTimberAttack() {
}

void UGruntyStackComponent::StartCrashDown() {
}

bool UGruntyStackComponent::IsInStack() const {
    return false;
}

EGruntyStackBehaviourState UGruntyStackComponent::GetStackState() const {
    return EGruntyStackBehaviourState::Invalid;
}

EGruntyStackPosition UGruntyStackComponent::GetStackPosition() const {
    return EGruntyStackPosition::Invalid;
}

AGruntyStack* UGruntyStackComponent::GetStackActor() {
    return NULL;
}

bool UGruntyStackComponent::DetachSelfFromStack() {
    return false;
}

void UGruntyStackComponent::DetachEntireStack() {
}

void UGruntyStackComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGruntyStackComponent, StackState);
    DOREPLIFETIME(UGruntyStackComponent, StackPosition);
    DOREPLIFETIME(UGruntyStackComponent, CurrentStack);
}


