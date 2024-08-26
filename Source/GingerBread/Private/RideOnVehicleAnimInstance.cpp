#include "RideOnVehicleAnimInstance.h"

URideOnVehicleAnimInstance::URideOnVehicleAnimInstance() {
    this->IsPlayingHeavyLanding = false;
    this->IsPlayingMovement = true;
    this->HasReachedEnd = false;
    this->MovementSpeed = 0.00f;
}

void URideOnVehicleAnimInstance::StopHeavyLanding() {
}

void URideOnVehicleAnimInstance::SetMovementSpeed(const float InMovementSpeed) {
}

void URideOnVehicleAnimInstance::SetIsPlayingMovement(const bool InIsPlayingMovement) {
}

void URideOnVehicleAnimInstance::PlayHeavyLanding(FVector2D InHeavyLandingLocation) {
}

void URideOnVehicleAnimInstance::EndReached() {
}


