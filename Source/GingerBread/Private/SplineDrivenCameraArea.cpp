#include "SplineDrivenCameraArea.h"

ASplineDrivenCameraArea::ASplineDrivenCameraArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SplineDrivenCameraBehaviour = NULL;
}

void ASplineDrivenCameraArea::SnapToTargetLocation() {
}

void ASplineDrivenCameraArea::SetTargetLocation(const FVector& world_location) {
}

void ASplineDrivenCameraArea::SetTargetDistance(float distance_along_spline) {
}

USplineComponent* ASplineDrivenCameraArea::GetSpline() const {
    return NULL;
}

float ASplineDrivenCameraArea::GetDistanceAlongSpline() const {
    return 0.0f;
}


