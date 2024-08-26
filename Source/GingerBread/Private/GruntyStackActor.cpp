#include "GruntyStackActor.h"

FGruntyStackActor::FGruntyStackActor() {
    this->FallingState = EGruntyStackFallingState::NotFalling;
    this->FallAboveGapSpeed = 0.00f;
    this->ShieldState = EGruntyStackShieldState::NoShield;
    this->CollisionPairID = 0;
}

