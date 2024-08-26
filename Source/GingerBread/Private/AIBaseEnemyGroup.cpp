#include "AIBaseEnemyGroup.h"

UAIBaseEnemyGroup::UAIBaseEnemyGroup() {
    this->DetectionClass = NULL;
    this->AttackClass = NULL;
    this->DetectionCoordinator = NULL;
    this->AttackCoordinator = NULL;
    this->CameraCoordinator = NULL;
}

UWorld* UAIBaseEnemyGroup::GetWorld() const {
    return NULL;
}


