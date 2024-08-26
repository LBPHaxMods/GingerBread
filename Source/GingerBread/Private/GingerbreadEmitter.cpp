#include "GingerbreadEmitter.h"
#include "TriggerActorComponent.h"

AGingerbreadEmitter::AGingerbreadEmitter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->ParticleSystemActive = true;
}

void AGingerbreadEmitter::DeactivateEmitter() {
}

void AGingerbreadEmitter::ActivateEmitter() {
}


