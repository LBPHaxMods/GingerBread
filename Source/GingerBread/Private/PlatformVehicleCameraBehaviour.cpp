#include "PlatformVehicleCameraBehaviour.h"

UPlatformVehicleCameraBehaviour::UPlatformVehicleCameraBehaviour(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SnapRotation = false;
    this->AngularDrive = 100.00f;
    this->AngularDamping = 100.00f;
    this->MaxFocusOffset = 100.00f;
}


