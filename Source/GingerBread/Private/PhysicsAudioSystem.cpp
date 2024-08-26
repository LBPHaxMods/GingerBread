#include "PhysicsAudioSystem.h"

APhysicsAudioSystem::APhysicsAudioSystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HitEvent = NULL;
    this->SlideEvent = NULL;
    this->SlideStopEvent = NULL;
    this->RollEvent = NULL;
    this->RollStopEvent = NULL;
    this->ObjectTimeout = 0.25f;
    this->StartingAKCCount = 10;
    this->MaxAKComponents = 512;
    this->DisplayDebug = false;
    this->VisuliseSoundSources = false;
    this->DebugPrintSoundVelocities = false;
    this->VisuliseSoundSourcesSize = 30.00f;
    this->CountTouch = 0;
    this->bPostHitEvents = true;
    this->bPostSlideEvents = true;
    this->bPostRollEvents = true;
    this->LowSpeedExlustionLimitSQ = 0.10f;
}


