#include "TouchScreenAppCelebrationComponent.h"

UTouchScreenAppCelebrationComponent::UTouchScreenAppCelebrationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BalloonClass = NULL;
    this->DebugBalloons = NULL;
    this->DebugBalloonMesh = NULL;
    this->DebugBalloonMaterial = NULL;
    this->NumberOfBalloons = 50;
    this->bSpawnLife = true;
    this->NumHealthCapsule = 0;
    this->NumCollectabell = 0;
    this->HeartAppComponentClass = NULL;
    this->MemoryOrbAppComponentClass = NULL;
    this->CollectableAppComponentClass = NULL;
    this->Rows = 0;
    this->Collumns = 0;
}

void UTouchScreenAppCelebrationComponent::CheckCollectables(UTouchScreenAppBaseComponent* App, bool bIsLocked) {
}

void UTouchScreenAppCelebrationComponent::CheckCollectabells(ATouchScreenAppCollectabellComponentActor* Bell) {
}

void UTouchScreenAppCelebrationComponent::CheckBalloons(ATouchScreenAppBalloonComponentActor* Balloon) {
}


