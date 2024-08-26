#include "EnemySpawnerSpawnInfo.h"

FEnemySpawnerSpawnInfo::FEnemySpawnerSpawnInfo() {
    this->EnemyClass = NULL;
    this->Patrol = NULL;
    this->LevelType = EEnemyLevelType::Standard;
    this->SpawnState = EAISpawnState::Default;
    this->WorldLocation = EWorldLocation::Amazon;
    this->IsShieldStack = false;
    this->NumberOfGruntysInStack = 0;
}

