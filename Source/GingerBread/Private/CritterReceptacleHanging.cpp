#include "CritterReceptacleHanging.h"
#include "Components/StaticMeshComponent.h"

ACritterReceptacleHanging::ACritterReceptacleHanging(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TripodString = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TripodString"));
    this->HangingString = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HangingString"));
    this->TripodString->SetupAttachment(Basket);
    this->HangingString->SetupAttachment(RootComponent);
}


