#include "WorldTranslationEngine.h"

AWorldTranslationEngine::AWorldTranslationEngine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Speed = 10.00f;
    this->SplineComponent = NULL;
}

void AWorldTranslationEngine::AddTargetActors(const TArray<AActor*>& Actors) {
}


