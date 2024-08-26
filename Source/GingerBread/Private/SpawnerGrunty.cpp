#include "SpawnerGrunty.h"

ASpawnerGrunty::ASpawnerGrunty(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsShieldStack = false;
    this->NumberOfGruntys = 1;
    this->SpawnVFXStackVerticalOffset = 5.75f;
}

bool ASpawnerGrunty::SpawnAIStack_Implementation(const TArray<UClass*>& ClassesToStack) {
    return false;
}

TArray<AGingerbreadAICharacter*> ASpawnerGrunty::GetSpawnedAIs() {
    return TArray<AGingerbreadAICharacter*>();
}


