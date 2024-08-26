#include "RollUnderVolume.h"

ARollUnderVolume::ARollUnderVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {

    this->AllowZ = false;
    this->CurrentMode = ERollUnderVolumeMode::ConstantDirection;
    this->IsOneWay = false;
    this->MaxEntryAngle = 0.75f;
    this->ExtraDistance = 2.00f;
    this->SplineExtraDistance = 1.00f;
    this->ShouldEnforceSplineLimits = true;
    this->DebugEntryAngle = false;
    this->DebugSpline = false;
    this->PointDensity = 5.00f;
    this->Size = 5.00f;
    this->OffsetEdge = 5.00f;
    this->Spline = NULL;
    this->CollisionBox = NULL;
    this->InteractCollisionBox = NULL;
    this->SplineSpeedMultiplier = 1.00f;
    this->UsesConstantSpeed = false;
}

void ARollUnderVolume::SetUp(USplineComponent* newspline, UBoxComponent* newbox, UInteractionComponent* newInteraction) {
}

void ARollUnderVolume::OnRollStart_Implementation(ASackboy* SB, UPrimitiveComponent* Collider, int32 splineIndex) {
}

void ARollUnderVolume::OnRollEnd_Implementation(ASackboy* SB, UPrimitiveComponent* Collider, int32 splineIndex, ERollHoleEndReason EndReason) {
}

void ARollUnderVolume::EnforceSplineLimits() {
}

void ARollUnderVolume::DEBUG_drawSpline() {
}

bool ARollUnderVolume::CanTransition(FVector positon, float& dir, UPrimitiveComponent* comp) const {
    return false;
}


