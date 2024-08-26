#include "WheelComponent.h"

UWheelComponent::UWheelComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Radius = 10.00f;
    this->Width = 2.00f;
    this->Mass = 10.00f;
    this->AngularDrag = 10.00f;
    this->WheelStaticFriction = 1.00f;
    this->WheelDynamicFriction = 1.00f;
    this->MaxAxisDeviation = 0.20f;
    this->Vehicle = NULL;
    this->VehicleBaseMesh = NULL;
    this->longitudinalSlipRatio = NULL;
    this->latitudinalSlipRatio = NULL;
    this->MotorForce = 10.00f;
    this->BrakingForce = 10.00f;
    this->LateralGraphMultiplier = 1.00f;
    this->LongitudinalGraphMultiplier = 1.00f;
    this->WheelMaxAngle = 15.00f;
    this->RestLength = 5.00f;
    this->SuspendMax = 10.00f;
    this->SuspendMin = 5.00f;
    this->SuspentionSpringStrength = 1.00f;
    this->DampingStrength = 1.00f;
    this->MaxSuspendForce = 1200.00f;
    this->RotationFactor = 100.00f;
    this->WheelMeshComponent = NULL;
    this->ForceCreateWheelMesh = true;
    this->ZAxisDistance = 0.00f;
    this->SuspendForce = 0.00f;
    this->WheelAngularVelocity = 0.00f;
    this->forwardspeed = 0.00f;
    this->slipratio = 0.00f;
    this->SideSlipAngle = 0.00f;
    this->IsGrounded = false;
}

void UWheelComponent::RotateWheel(float amt) {
}

void UWheelComponent::Brake(float Force) {
}


