#include "SoloDuopedeSegment.h"
#include "TriggerActorComponent.h"

ASoloDuopedeSegment::ASoloDuopedeSegment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->IsLevelPlaced = true;
    this->SoloDuopedeSpeed = EDuopedeSpeed::Slow;
    this->TriggerComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerComponent"));
}


