#include "PopshotConfigFightBase.h"

UPopshotConfigFightBase::UPopshotConfigFightBase() {
    this->DesiredHookPointDistance = 10.00f;
    this->MaintainPreviousTargets = false;
    this->AlwaysInDistance = false;
    this->AlwaysInFront = false;
    this->SixthSenseRange = 25.00f;
    this->DistanceDivisorHeuristic = 3.00f;
    this->PreferTargetsUpAhead = true;
    this->CowerStartDistance = 26.00f;
    this->CowerStopDistance = 28.00f;
    this->CowerStartCloseDistance = 12.00f;
    this->CowerStopCloseDistance = 10.00f;
    this->CowerStartHeight = 16.00f;
    this->CowerStopHeight = 20.00f;
    this->UncowerTime = 0.50f;
    this->MaxAcceptableDistFromHome = 10.00f;
    this->ReturnHomeAcceptanceDist = 1.00f;
    this->ReturnSpeed = 40.00f;
    this->ReturnRotationSpeed = 360.00f;
    this->HomeLocationNavmesh = TEXT("IncreasedRadius");
    this->TurnToTargetRotationSpeed = 270.00f;
    this->TurnToTargetMinAngleForTurn = 60.00f;
    this->TurnToTargetPredictAheadSeconds = 0.40f;
}


