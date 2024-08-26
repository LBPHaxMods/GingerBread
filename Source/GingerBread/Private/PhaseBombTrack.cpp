#include "PhaseBombTrack.h"
#include "Components/SplineComponent.h"
#include "TriggerActorComponent.h"

APhaseBombTrack::APhaseBombTrack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));

    this->SplineComponent = (USplineComponent*)RootComponent;
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->NumberOfPhaseBombs = 3;
    this->UseCustomSpacing = false;
    this->CustomSpacing = 50.00f;
    this->traversalTime = 5.00f;
    this->PhaseLightRadius = 25.00f;
    this->StartsActive = true;
    this->InitialTrackPosition = 0.00f;
    this->PhaseBombMeshVerticalOffset = 0.00f;
    this->PhaseBombClass = NULL;
    this->SplineFollowerLeader = NULL;
}

void APhaseBombTrack::CopyProperties(USplineComponent* InSpline, int32 InNumberOfPhaseBombs, bool InUseCustomSpacing, float InCustomSpacing, float InTraversalTime, float InPhaseLightRadius, bool InStartsActive, float InInitialTrackPosition) {
}


