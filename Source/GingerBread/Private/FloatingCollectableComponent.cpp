#include "FloatingCollectableComponent.h"
#include "Components/TimelineComponent.h"
#include "Net/UnrealNetwork.h"

UFloatingCollectableComponent::UFloatingCollectableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MotionTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("MotionTimeline"));
    this->TimelineCurve = NULL;
    this->TimelineLength = 1.00f;
    this->TimelinePlayRate = 1.00f;
    this->RotationMultiplier = 1.00f;
    this->RandomSeed = 0;
    this->Enabled = true;
}

void UFloatingCollectableComponent::OnRep_RandomSeed() {
}

void UFloatingCollectableComponent::OnMotionTimelineUpdate(const FVector& Offset) {
}

void UFloatingCollectableComponent::ApplyWaterPreset() {
}

void UFloatingCollectableComponent::ApplySpacePreset() {
}

void UFloatingCollectableComponent::ApplyAirPreset() {
}

void UFloatingCollectableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFloatingCollectableComponent, RandomSeed);
}


