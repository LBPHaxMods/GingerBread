#include "KingFroogleConfigStompBase.h"

UKingFroogleConfigStompBase::UKingFroogleConfigStompBase() {
    this->AimDistanceFromHopTarget = 16.00f;
    this->HopMaxDist = 40.00f;
    this->HopAttackArc = 0.50f;
    this->HopTurnSpeed = 180.00f;
    this->ConsecutiveStompsPerPhase.AddDefaulted(3);
    this->InterStompDelayPerPhase.AddDefaulted(3);
    this->StompCooldownPerPhase.AddDefaulted(4);
    this->AOEHeight = 1.00f;
    this->AOEFinalRadius = 78.00f;
    this->AOEExpansionSpeed = 120.00f;
    this->AOEHeightOffset = -9.50f;
}


