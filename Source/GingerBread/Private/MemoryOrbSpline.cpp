#include "MemoryOrbSpline.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SplineComponent.h"
#include "EMemoryOrbSpawnType.h"
#include "Net/UnrealNetwork.h"
#include "SplineFollowerComponent.h"

AMemoryOrbSpline::AMemoryOrbSpline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->SpawnType = EMemoryOrbSpawnType::SplineSpawn;
    this->SplineFollower = CreateDefaultSubobject<USplineFollowerComponent>(TEXT("SplineFollower"));
    this->Spline = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->TrailParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("TrailParticleSystem"));
    this->TriggerEffectDelay = 0.50f;
    this->SplineTravelTime = 2.00f;
    this->Server_TriggeredTimeStamp = 0.00f;
    this->Spline->SetupAttachment(RootComponent);
    this->TrailParticleSystem->SetupAttachment(StaticMeshComponent);
}

void AMemoryOrbSpline::SpawnEmitter() {
}

void AMemoryOrbSpline::OnSplinePointReached(USplineFollowerComponent* pSplineFollowerComponent, const bool WasMovingForwards, int32 SplinePointIndex) {
}

void AMemoryOrbSpline::OnRep_TriggeredTimeStamp() {
}

void AMemoryOrbSpline::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMemoryOrbSpline, Server_TriggeredTimeStamp);
}


