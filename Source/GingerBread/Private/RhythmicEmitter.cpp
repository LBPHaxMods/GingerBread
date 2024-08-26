#include "RhythmicEmitter.h"
#include "Components/ArrowComponent.h"

ARhythmicEmitter::ARhythmicEmitter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
    this->ArrowComponent = (UArrowComponent*)RootComponent;
    this->ParticleSystem = NULL;
}


