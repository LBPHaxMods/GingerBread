#include "SoloFlyingDuopedeSegment.h"
#include "TriggerActorComponent.h"

ASoloFlyingDuopedeSegment::ASoloFlyingDuopedeSegment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsLevelPlaced = true;
    this->SoloDuopedeSpeed = EFlyingDuopedeSpeed::Slow;
    this->TriggerComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerComponent"));
}


