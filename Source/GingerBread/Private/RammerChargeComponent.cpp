#include "RammerChargeComponent.h"

URammerChargeComponent::URammerChargeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Speed = 43.00f;
    this->Accelertation = 500.00f;
    this->CurveRate = 15.00f;
    this->DistanceToCurveLock = 5.00f;
    this->TargetOvershootDistance = 14.00f;
    this->MinimumChargeDistance = 1.00f;
    this->BrakingDistance = 13.90f;
    this->BrakeLandMovementDistance = 5.00f;
    this->DistanceFromDestinationToPlayMissedAnim = 8.00f;
    this->NumberOfConsecutiveCharges = 1;
    this->BrakeTurnRate = 360.00f;
    this->GrabChargeMinimumDistance = 50.00f;
    this->GrabChargeMaximumDistance = 80.00f;
    this->GrabChargeMinimumAngleDelta = 60.00f;
    this->GrabChargeObstacleAvoidanceRange = 35.00f;
    this->ChargeDamageEnableDelay = 0.00f;
    this->StopAtEdge = false;
    this->EdgeLookAheadTime = 0.10f;
    this->MinHeightToDoFallRecovery = 7.00f;
    this->OverhangAmount = 0.00f;
    this->DistanceToStopAtEdge = 7.50f;
    this->HandOfGodImpulse = 25.00f;
    this->StartAnimAction = TEXT("ChargeCharge");
    this->BrakeAnimAction = TEXT("ChargeBraking");
    this->HitWallAnimAction = TEXT("ChargeImpactWall");
    this->DamageAnimAction = TEXT("ChargeImpactDamage");
    this->FallAnimAction = TEXT("ChargeFall");
    this->MissedAnimAction = TEXT("ChargeMissed");
    this->HitWallAnimTime = 1.80f;
    this->HitWallArmouredAnimTime = 0.80f;
    this->DamageAnimTime = 2.00f;
    this->MissedAnimTime = 1.50f;
    this->MaximumFallTime = 4.00f;
    this->MinimumFallTime = 0.30f;
    this->LostBrakingTimeForStopAtEdge = 0.00f;
    this->FallOffLandVFX = NULL;
    this->HitWallImpulse = 35.00f;
    this->BlockHeadToHeadCollisionMaxAngle = 45.00f;
    this->ChargeBargeAngle = 70.00f;
}

void URammerChargeComponent::StartCharge() {
}

bool URammerChargeComponent::ShouldTreatVictimAsWall(ARammer* attacker, ARammer* Victim) const {
    return false;
}

bool URammerChargeComponent::IsInChargeState() const {
    return false;
}

void URammerChargeComponent::EndCharge() {
}


