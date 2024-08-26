#include "OrbGate.h"

AOrbGate::AOrbGate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Zone = NULL;
    this->LockState = EOrbGateLockState::Locked;
}

void AOrbGate::UnlockGate() {
}


void AOrbGate::RefreshOrbGateLockState() {
}




