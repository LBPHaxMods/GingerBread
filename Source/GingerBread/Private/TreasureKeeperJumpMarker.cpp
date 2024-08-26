#include "TreasureKeeperJumpMarker.h"
#include "ArcComponent.h"

ATreasureKeeperJumpMarker::ATreasureKeeperJumpMarker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UArcComponent>(TEXT("ArcComponent"));
    this->ArcComponent = (UArcComponent*)RootComponent;
    this->TargetJumpMarker = NULL;
}


