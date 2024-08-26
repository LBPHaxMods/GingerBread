#include "ButtBomberBoxFlightZone.h"
#include "Components/BoxComponent.h"

AButtBomberBoxFlightZone::AButtBomberBoxFlightZone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InnerCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("InnerBox"));
    this->OuterCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("OuterBox"));
    this->InnerCollider->SetupAttachment(RootComponent);
    this->OuterCollider->SetupAttachment(RootComponent);
}


