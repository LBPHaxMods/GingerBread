#include "SleepComponent.h"

USleepComponent::USleepComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAwake = true;
    this->bSleepOnBeginPlay = false;
    this->bAffectVisibility = true;
    this->bAffectCollision = true;
    this->bAffectPhysicsSimulation = true;
    this->bAffectActorTick = true;
    this->bAffectComponentTick = true;
}

void USleepComponent::SetAwake(bool bIsAwake) {
}


