#include "CollectableReplicatedState.h"

FCollectableReplicatedState::FCollectableReplicatedState() {
    this->CollectingSackboy = NULL;
    this->Action = ECollectableAction::Idling;
}

