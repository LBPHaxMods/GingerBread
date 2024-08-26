#include "AIHookPointSourceComponent.h"

UAIHookPointSourceComponent::UAIHookPointSourceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EnableDebug = false;
}

void UAIHookPointSourceComponent::OnRegisteredActorDestroyed(AActor* Actor) {
}


