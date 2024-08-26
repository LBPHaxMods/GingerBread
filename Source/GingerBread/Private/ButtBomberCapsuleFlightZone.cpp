#include "ButtBomberCapsuleFlightZone.h"
#include "Components/CapsuleComponent.h"

AButtBomberCapsuleFlightZone::AButtBomberCapsuleFlightZone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InnerCollider = CreateDefaultSubobject<UCapsuleComponent>(TEXT("InnerCapsule"));
    this->OuterCollider = CreateDefaultSubobject<UCapsuleComponent>(TEXT("OuterCapsule"));
    this->InnerCapsuleRadius = 32.00f;
    this->OuterCapsuleRadius = 50.00f;
    this->InnerCapsuleHeight = 120.00f;
    this->OuterCapsuleHeight = 130.00f;
    this->InnerCollider->SetupAttachment(RootComponent);
    this->OuterCollider->SetupAttachment(RootComponent);
}


