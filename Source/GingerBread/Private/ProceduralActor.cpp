#include "ProceduralActor.h"

AProceduralActor::AProceduralActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool AProceduralActor::IsDragFinished() const {
    return false;
}

bool AProceduralActor::EnqueueConstructionScriptCall() {
    return false;
}


