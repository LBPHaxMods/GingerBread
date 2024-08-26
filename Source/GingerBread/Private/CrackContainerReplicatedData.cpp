#include "CrackContainerReplicatedData.h"

FCrackContainerReplicatedData::FCrackContainerReplicatedData() {
    this->State = ECrackContainerState::Idle;
    this->CapturedSackboy = NULL;
}

