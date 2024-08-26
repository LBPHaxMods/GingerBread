#include "AttractionCollectableComponent.h"
#include "Components/TimelineComponent.h"

UAttractionCollectableComponent::UAttractionCollectableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MotionTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("MotionTimeline"));
    this->TimelineCurve = NULL;
    this->Duration = 0.20f;
    this->MaximumDistance = 10.00f;
}

void UAttractionCollectableComponent::OnMotionTimelineUpdate(const float Alpha) {
}

void UAttractionCollectableComponent::OnAttractingSackboyDied(ASackboy* pSackboy) {
}


