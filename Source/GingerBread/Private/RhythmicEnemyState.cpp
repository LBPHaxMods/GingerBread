#include "RhythmicEnemyState.h"

FRhythmicEnemyState::FRhythmicEnemyState() {
    this->TimeUntilSyncPoint = 0.00f;
    this->IsAlive = false;
    this->ShouldUseDeathEffects = false;
}

