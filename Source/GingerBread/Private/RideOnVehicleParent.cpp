#include "RideOnVehicleParent.h"

ARideOnVehicleParent::ARideOnVehicleParent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TargetCameraArea = NULL;
    this->ChangeSpeedStart = 0.00f;
    this->ChangeSpeedTarget = 0.00f;
    this->CamMinDistance = 0.00f;
    this->CamMaxDistance = 0.00f;
    this->CamFocusOffsetRight = 0.00f;
    this->CamFocusOffsetUp = 0.00f;
    this->UseAdaptiveCam = false;
    this->CanMove = true;
    this->VehicleSpeed = 0.00f;
}

void ARideOnVehicleParent::OnHeavyLanding_Implementation(const FVector& WorldLocation) {
}

bool ARideOnVehicleParent::CalculateHeavyLandingNormalisedLocation(const UPrimitiveComponent* BoundsComponent, const FVector& WorldLocation, FVector& OutNormalisedLocation) const {
    return false;
}


