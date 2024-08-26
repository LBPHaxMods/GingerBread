#include "VibrationCollectableComponent.h"
#include "Components/TimelineComponent.h"

UVibrationCollectableComponent::UVibrationCollectableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MotionTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("MotionTimeline"));
    this->TimelineCurve = NULL;
    this->TimelineLength = 1.00f;
    this->TimelinePlayRate = 1.00f;
    this->IntensityMultiplier = 1.00f;
    this->RotationMultiplier = 1.00f;
    this->MaximumDistance = 30.00f;
    this->PlayVibrationEvent = NULL;
    this->StopVibrationEvent = NULL;
}

void UVibrationCollectableComponent::UpdateVibrationRTPC() {
}

void UVibrationCollectableComponent::OnMotionTimelineUpdate(const FVector& Offset) {
}


