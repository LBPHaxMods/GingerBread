#include "VertexAnimationEvent.h"

FVertexAnimationEvent::FVertexAnimationEvent() {
    this->PlayMode = EVAEPlayMode::ClipStart;
    this->TriggerTime = 0.00f;
    this->TriggerOnce = false;
    this->AkEvent = NULL;
    this->ParticleSystem = NULL;
    this->Triggered = false;
}

