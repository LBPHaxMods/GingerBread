#include "BabyMonkeySpawnerManager.h"
#include "Components/SceneComponent.h"

ABabyMonkeySpawnerManager::ABabyMonkeySpawnerManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));

    this->SceneComponent = (USceneComponent*)RootComponent;
}


