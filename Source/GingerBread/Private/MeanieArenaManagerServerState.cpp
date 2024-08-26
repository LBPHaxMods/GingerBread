#include "MeanieArenaManagerServerState.h"

FMeanieArenaManagerServerState::FMeanieArenaManagerServerState() {
    this->ServerTimeStamp = 0.00f;
    this->MovementState = EMeanieArenaRingMovementState::NotSpinning;
    this->AttackType = EMeanieAttackChoice::CleaveCombo;
    this->CurrentMovementRequestTimeStamp = 0.00f;
    this->MovementTime = 0.00f;
    this->CurrentYawInnerRing = 0.00f;
    this->CurrentYawOuterRing = 0.00f;
}

