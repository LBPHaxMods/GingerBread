#include "RideOnPathActor.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "RideOnPathComponent.h"

ARideOnPathActor::ARideOnPathActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->Root = (USceneComponent*)RootComponent;
    this->Spline = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->RideOnPath = CreateDefaultSubobject<URideOnPathComponent>(TEXT("RideOnPath"));
    this->Spline->SetupAttachment(RootComponent);
}

URideOnPathComponent* ARideOnPathActor::GetRideOnPathComponent() {
    return NULL;
}


