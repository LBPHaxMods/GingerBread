#include "SoloPufferFish.h"
#include "EPufferFishState.h"
#include "TriggerActorComponent.h"

ASoloPufferFish::ASoloPufferFish(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentState = EPufferFishState::AlwaysEnabled;
    this->CanRoll = false;
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
}


