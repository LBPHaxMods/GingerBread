#include "RideOnPathComponent.h"

URideOnPathComponent::URideOnPathComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VehicleActor = NULL;
    this->Engine = NULL;
    this->Splines.AddDefaulted(1);
    this->PathWidthScale = 100.00f;
    this->PathHeightScale = 100.00f;
    this->bDisplayPath = false;
    this->bDisplayPathAll = false;
}

void URideOnPathComponent::UnregisterPathEvent(URideOnPathEventComponent* path_event) {
}

void URideOnPathComponent::RegisterPathEvent(URideOnPathEventComponent* path_event) {
}

int32 URideOnPathComponent::FindPathSpline(AActor* spline_actor) {
    return 0;
}


