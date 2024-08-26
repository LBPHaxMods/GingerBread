#include "CollectableComponentBase.h"

UCollectableComponentBase::UCollectableComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->pCollectableOwner = NULL;
}


