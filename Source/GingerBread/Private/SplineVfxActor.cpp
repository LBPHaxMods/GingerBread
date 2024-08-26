#include "SplineVfxActor.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SplineComponent.h"
#include "Components/StaticMeshComponent.h"

ASplineVfxActor::ASplineVfxActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DefaultMesh"));
    this->StaticMeshComponent = (UStaticMeshComponent*)RootComponent;
    this->ParticleSystemComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem"));
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->FlappingDeductionVal = 3.00f;
    this->MaterialParameterName = TEXT("Colour");
    this->MinColourValue = 0.25f;
    this->SpeedCurve = NULL;
    this->ParticleSystemComponent->SetupAttachment(RootComponent);
}

void ASplineVfxActor::WakeActor() {
}

void ASplineVfxActor::SleepActor() {
}

void ASplineVfxActor::ResetActor(FTransform NewTransform, float NewSpeed, FRotator NewRotation, float NewScale, FVector NewOffset, UStaticMesh* NewMesh) {
}

bool ASplineVfxActor::IsInUse() {
    return false;
}


