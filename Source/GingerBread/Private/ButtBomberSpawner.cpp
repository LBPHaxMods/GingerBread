#include "ButtBomberSpawner.h"
#include "Components/SceneComponent.h"

AButtBomberSpawner::AButtBomberSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->buttbomberClass = NULL;
    this->UseFlightZones = false;
}


