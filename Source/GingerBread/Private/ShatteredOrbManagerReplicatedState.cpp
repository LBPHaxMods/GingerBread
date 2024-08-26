#include "ShatteredOrbManagerReplicatedState.h"

FShatteredOrbManagerReplicatedState::FShatteredOrbManagerReplicatedState() {
    this->CollectedCount = 0;
    this->TotalCount = 0;
    this->CollectedShard = NULL;
    this->CollectingSackboy = NULL;
}

