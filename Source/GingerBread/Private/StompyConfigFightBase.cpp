#include "StompyConfigFightBase.h"

UStompyConfigFightBase::UStompyConfigFightBase() {
    this->HookPointHeader = TEXT("_________________________________________________________HookPoint_________________________________________________________");
    this->DesiredHookPointDistance = 15.00f;
    this->CanSnapToTargetLocation = true;
    this->SnapToTargetAcceptanceRadius = 5.00f;
    this->ConalDetectionHeader = TEXT("_________________________________________________________ConalDetection_________________________________________________________");
    this->MaintainPreviousTargets = false;
    this->AlwaysInDistance = false;
    this->AlwaysInFront = false;
    this->SixthSenseRange = 0.00f;
    this->DistanceDivisorHeuristic = 3.00f;
    this->PreferTargetsUpAhead = true;
    this->CanAttackHeader = TEXT("_________________________________________________________CanAttack_________________________________________________________");
    this->MinTimeToSwitchTargets = 5.00f;
    this->StartMovingDistance = 6.00f;
    this->StopMovingDistance = 2.00f;
    this->PreSpinMovementDelay = 0.90f;
    this->ChaseHeader = TEXT("_________________________________________________________Chase_________________________________________________________");
    this->ChasePreferredSeparationFromTarget = 10.00f;
    this->LockDirectionAfterHitDuration = 1.00f;
    this->LockDirectionAfterHitDistance = 30.00f;
    this->SpinChaseCurveRate = 60.00f;
    this->SpinChaseTargetDistance = 20.00f;
}


