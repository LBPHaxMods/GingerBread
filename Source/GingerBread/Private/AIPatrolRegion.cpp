#include "AIPatrolRegion.h"
#include "Components/BoxComponent.h"

AAIPatrolRegion::AAIPatrolRegion(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("PatrolRegionArea"));
    this->MinNewPatrolPointDistance = 10.00f;
    this->MaxNewPatrolPointDistance = 40.00f;
    this->PatrolRegionArea = (UBoxComponent*)RootComponent;
}


