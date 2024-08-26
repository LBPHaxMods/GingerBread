#include "ShatteredMemoryOrbReplicatedState.h"

FShatteredMemoryOrbReplicatedState::FShatteredMemoryOrbReplicatedState() {
    this->Action = EShatteredMemoryOrbState::Idle;
    this->CollectingSackboy = NULL;
}

