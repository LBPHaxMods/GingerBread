#include "CannonFlightCameraBehaviour.h"

UCannonFlightCameraBehaviour::UCannonFlightCameraBehaviour(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TrackingBlend = 0.50f;
    this->RotationBlend = 0.50f;
}


