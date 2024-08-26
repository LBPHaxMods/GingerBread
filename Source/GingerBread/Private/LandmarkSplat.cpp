#include "LandmarkSplat.h"
#include "LandmarkSplatComponent.h"

ALandmarkSplat::ALandmarkSplat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<ULandmarkSplatComponent>(TEXT("Root Landmark SplayComponent"));
    this->LandmarkSplatComponent = (ULandmarkSplatComponent*)RootComponent;
}



