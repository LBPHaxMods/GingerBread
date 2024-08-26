#include "TreasureKeeperSuicideMarker.h"
#include "Components/SplineComponent.h"

ATreasureKeeperSuicideMarker::ATreasureKeeperSuicideMarker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SuicideSplineComponent"));
    this->SplineComponent = (USplineComponent*)RootComponent;
}

void ATreasureKeeperSuicideMarker::AlignWithParentSpline() {
}


