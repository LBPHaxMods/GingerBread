#include "AIPatrolPointToPoint.h"
#include "Components/SplineComponent.h"

AAIPatrolPointToPoint::AAIPatrolPointToPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->Spline = (USplineComponent*)RootComponent;
    this->TeleportToPositionAtStart = true;
    this->AISeparation = 20.00f;
    this->StartOffset = 0.00f;
}


