#include "RhythmicPufferfishParent.h"
#include "Components/SceneComponent.h"

ARhythmicPufferfishParent::ARhythmicPufferfishParent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    this->TriggerActorComponent = NULL;
    this->AnimationMode = ERhythmicPufferfishAnimationMode::IdleOnly;
}

void ARhythmicPufferfishParent::ReturnToIdle() {
}


