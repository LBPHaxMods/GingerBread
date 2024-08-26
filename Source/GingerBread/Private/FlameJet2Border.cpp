#include "FlameJet2Border.h"
#include "Components/SceneComponent.h"

AFlameJet2Border::AFlameJet2Border(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    this->Rows = 2;
    this->Columns = 2;
}


