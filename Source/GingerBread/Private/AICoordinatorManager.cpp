#include "AICoordinatorManager.h"

AAICoordinatorManager::AAICoordinatorManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

int32 AAICoordinatorManager::GetNumberOfEnemiesOnScreen() const {
    return 0;
}

int32 AAICoordinatorManager::GetNumberOfEnemiesInFight() const {
    return 0;
}

AAICoordinatorManager* AAICoordinatorManager::GetInstance(const UObject* WorldContextObject) {
    return NULL;
}

void AAICoordinatorManager::GetAllCoordinatedActorsInGroup(TArray<AActor*>& _outActors, EEnemyGroupType _typeTag) {
}


