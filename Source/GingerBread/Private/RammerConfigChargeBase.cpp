#include "RammerConfigChargeBase.h"

URammerConfigChargeBase::URammerConfigChargeBase() {
    this->ChargeAnticipationJumpDistance = -16.00f;
    this->ChargeInitialAimPredictAheadTime = 0.20f;
    this->ChargeSpeed = 60.00f;
    this->ChargeAcceleration = 50.00f;
    this->ChargeCurveRate = 32.50f;
    this->DistanceToCurveLock = 5.00f;
    this->TargetOvershootDistance = 36.00f;
    this->MinimumChargeDistance = 1.00f;
    this->BrakingDistance = 34.00f;
    this->NumberOfConsecutiveCharges = 1;
    this->BrakeTurnRate = 360.00f;
    this->BrakeLandMovementDistance = 10.00f;
    this->DistanceFromDestinationToPlayMissedAnim = 9.00f;
    this->StopAtEdge = false;
    this->OverhangAmount = 0.00f;
    this->DistanceToStopAtEdge = 7.50f;
    this->MinHeightToDoFallRecovery = 7.00f;
    this->HandOfGodImpulse = 25.00f;
    this->HitWallImpulse = 35.00f;
    this->BlockHeadToHeadCollisionMaxAngle = 45.00f;
    this->ChargeBargeAngle = 70.00f;
}


