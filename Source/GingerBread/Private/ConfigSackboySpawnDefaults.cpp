#include "ConfigSackboySpawnDefaults.h"

UConfigSackboySpawnDefaults::UConfigSackboySpawnDefaults() {
    this->DefaultSpawnAnimDuration = 0.70f;
    this->VerticalCheckpointSpawnAnimDuration = 0.32f;
    this->DoorwaySpawnAnimDuration = 0.60f;
    this->SpawnLength = 0.20f;
    this->InvulnerableTime = 2.00f;
    this->FirstTimeSpawnLength = 0.00f;
    this->MaxSpawnCheckLength = 0.50f;
    this->SpawnObstructionVerticalSpeed = 100.00f;
    this->SpawnObstructionHorizontalSpeed = -20.00f;
    this->RespawnableDelaySeconds = 0.50f;
    this->RespawnDistanceCm = 12.00f;
    this->RespawnCopterUserDistance = 4.00f;
    this->RespawnCopterOffscreenDelay = 0.80f;
    this->RespawnCopterCollectionDistance = 16.00f;
    this->RespawnCopterCollectionDelay = 0.60f;
    this->RespawnCopterCollectionBlendPower = 3.00f;
}


