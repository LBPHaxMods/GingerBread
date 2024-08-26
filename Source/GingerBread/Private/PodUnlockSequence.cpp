#include "PodUnlockSequence.h"

UPodUnlockSequence::UPodUnlockSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FlowTriggers.AddDefaulted(2);
    this->bTerminatesUnlockSequence = false;
}


