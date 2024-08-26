#include "BTDecorator_LoopBPBase.h"

UBTDecorator_LoopBPBase::UBTDecorator_LoopBPBase() {
    this->NodeName = TEXT("BPLoop");
    this->AIOwner = NULL;
    this->ActorOwner = NULL;
    this->NumLoops = 5;
    this->bInfiniteLoop = false;
    this->InfiniteLoopTimeoutTime = -1.00f;
    this->bShowPropertyDetails = true;
}

bool UBTDecorator_LoopBPBase::StopLoop_Implementation() {
    return false;
}



