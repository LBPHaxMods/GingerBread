#include "HitReactionData.h"

FHitReactionData::FHitReactionData() {
    this->PushBackImpulse = 0.00f;
    this->PushUpImpulse = 0.00f;
    this->Duration = 0.00f;
    this->FaceImpact = false;
    this->DeathDelay = 0.00f;
    this->DazeDuration = 0.00f;
    this->PhysicsControlled = false;
    this->SlideFactor = 0.00f;
}

