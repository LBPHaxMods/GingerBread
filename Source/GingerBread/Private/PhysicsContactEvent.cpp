#include "PhysicsContactEvent.h"

FPhysicsContactEvent::FPhysicsContactEvent() {
    this->PhysicsAudioComponent = NULL;
    this->component = NULL;
    this->PhysMaterial = NULL;
    this->OtherComponent = NULL;
    this->OtherPhysMaterial = NULL;
}

