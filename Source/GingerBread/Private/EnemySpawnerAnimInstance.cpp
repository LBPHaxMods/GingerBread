#include "EnemySpawnerAnimInstance.h"

UEnemySpawnerAnimInstance::UEnemySpawnerAnimInstance() {
    this->DoorDepressionAlpha = 0.00f;
    this->EnterDead = false;
    this->ExitDead = false;
    this->EnterIdleOrWaiting = false;
    this->ExitIdleOrWaiting = false;
    this->EnterAnticipateSpawn = false;
    this->ExitAnticipateSpawn = false;
    this->EnterBlocked = false;
    this->ExitBlocked = false;
    this->EnterSpawning = false;
    this->ExitSpawning = false;
}


