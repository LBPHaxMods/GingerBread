#include "SplineLeaderSubjectComponent.h"
#include "Net/UnrealNetwork.h"

USplineLeaderSubjectComponent::USplineLeaderSubjectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SplineFollowerLeader = NULL;
}

void USplineLeaderSubjectComponent::Unpause() {
}

void USplineLeaderSubjectComponent::RESET(float SplinePosition) {
}

void USplineLeaderSubjectComponent::PAUSE() {
}

void USplineLeaderSubjectComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USplineLeaderSubjectComponent, SplineFollowerLeader);
}


