#include "VelocityStorer.h"

UVelocityStorer::UVelocityStorer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

FVector UVelocityStorer::GetLastFrameActorVelocity() {
    return FVector{};
}


