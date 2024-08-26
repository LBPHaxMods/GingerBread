#include "TreasureKeeperEscapeMarker.h"
#include "Components/SceneComponent.h"

ATreasureKeeperEscapeMarker::ATreasureKeeperEscapeMarker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    this->Shape = ETreasureKeeperEscapeMarkerShape::Point;
    this->SphereRadius = 10.00f;
}


