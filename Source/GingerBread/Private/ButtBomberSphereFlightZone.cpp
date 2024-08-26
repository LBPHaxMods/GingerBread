#include "ButtBomberSphereFlightZone.h"
#include "Components/SphereComponent.h"

AButtBomberSphereFlightZone::AButtBomberSphereFlightZone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InnerCollider = CreateDefaultSubobject<USphereComponent>(TEXT("InnerSphere"));
    this->OuterCollider = CreateDefaultSubobject<USphereComponent>(TEXT("OuterSphere"));
    this->InnerSphereRadius = 32.00f;
    this->OuterSphereRadius = 50.00f;
    this->InnerCollider->SetupAttachment(RootComponent);
    this->OuterCollider->SetupAttachment(RootComponent);
}


