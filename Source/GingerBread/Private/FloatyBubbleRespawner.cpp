#include "FloatyBubbleRespawner.h"

AFloatyBubbleRespawner::AFloatyBubbleRespawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {

    this->BubbleToRespawn = NULL;
    this->SpawnSequenceEnabled = true;
    this->SpawnRadius = 11.00f;
    this->RespawnDelay = 1.00f;
    this->RespawnMotionDuration = 1.00f;
    this->RespawnMotionCurve = NULL;
}

void AFloatyBubbleRespawner::RespawnBubble(AFloatyBubble* bubble) {
}


