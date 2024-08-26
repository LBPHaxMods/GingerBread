#include "CulledActor.h"

ACulledActor::ACulledActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CullDistance = 1000.00f;
    this->bCullOffscreen = false;
    this->bCullDistanceToCamera = false;
    this->bCullDistanceToSackboy = false;
    this->bCullComponents = false;
    this->GenerateBPEvent = false;
}



