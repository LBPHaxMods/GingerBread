#include "ConveyorBeltComponent.h"

UConveyorBeltComponent::UConveyorBeltComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BeltOffsetParameterName = TEXT("Master UV Offset X");
    this->BeltVelocityXParameterName = TEXT("UV Velocity X");
    this->DriveMode = EConveyorBeltDriveMode::Spline;
    this->BeltDirectionMultiplier = -1.00f;
    this->SackboyGripAngle = 90.00f;
    this->SackboyDriveContacts = true;
    this->SackboyContactFriction = 0.00f;
    this->DropDistanceFromStart = 0.00f;
    this->DropDistanceFromEnd = 0.00f;
    this->DropAdditionalImpulse = 0.00f;
    this->SingleContactPerPrimitive = false;
    this->SackboySupportTraceComplex = false;
    this->AlwaysReposition = true;
    this->DebugDrawSackboyFootPosition = false;
}

void UConveyorBeltComponent::SetWallJumpEnabled(bool Enabled) {
}

void UConveyorBeltComponent::SetBeltSpeed(float beltSpeed) {
}

void UConveyorBeltComponent::SetBeltMaterial(UMaterialInstanceDynamic* Material) {
}

bool UConveyorBeltComponent::IsWallJumpEnabled() const {
    return false;
}

USplineComponent* UConveyorBeltComponent::GetSpline() const {
    return NULL;
}

float UConveyorBeltComponent::GetBeltSpeed() const {
    return 0.0f;
}


