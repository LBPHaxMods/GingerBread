#include "RhythmicEnemyHitReactionSetup.h"

FRhythmicEnemyHitReactionSetup::FRhythmicEnemyHitReactionSetup() {
    this->ShouldFaceAttacker = false;
    this->ShouldModifyVelocity = false;
    this->HorizontalSpeed = 0.00f;
    this->VerticalSpeed = 0.00f;
    this->MinimumDeathDelay = 0.00f;
    this->SyncBeatFraction = 0.00f;
}

