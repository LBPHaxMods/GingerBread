#include "LevelManager.h"

ALevelManager::ALevelManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool ALevelManager::GetOverlappingPhaseLightsInteraction(UInteractionComponent* Interaction, TArray<APhaseLight*>& phaseLightsOut) {
    return false;
}

bool ALevelManager::GetOverlappingPhaseLights(UPrimitiveComponent* Primitive, TArray<APhaseLight*>& phaseLightsOut) {
    return false;
}

ALevelManager* ALevelManager::GetInstance(const UObject* WorldContextObject) {
    return NULL;
}


