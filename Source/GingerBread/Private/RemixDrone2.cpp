#include "RemixDrone2.h"
#include "AkComponent.h"
#include "Components/BillboardComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SplineComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

ARemixDrone2::ARemixDrone2(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("BillboardComponent"));
    this->BillboardComponent = (UBillboardComponent*)RootComponent;
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->DroneSkeleton = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("DroneSkeleton"));
    this->PickupObject = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PickupObject"));
    this->PickupRespawnVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("PickupRespawnVFX"));
    this->TrailVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("TrailVFX"));
    this->Ak_RemixDrone = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_RemixDrone"));
    this->ClawCurve = NULL;
    this->DroneFlightSFX = NULL;
    this->PickupDropSFX = NULL;
    this->StandardMaterial = NULL;
    this->GoldMaterial = NULL;
    this->MaxSpeed = 30.00f;
    this->MinSpeed = 0.00f;
    this->InnerRadius = 35.00f;
    this->OuterRadius = 80.00f;
    this->TrailSeparation = 10.00f;
    this->SplineDistance_Server = 0.00f;
    this->MaxDistanceError = 25.00f;
    this->SplineComponent->SetupAttachment(RootComponent);
    this->DroneSkeleton->SetupAttachment(RootComponent);
    this->PickupObject->SetupAttachment(DroneSkeleton);
    this->PickupRespawnVFX->SetupAttachment(DroneSkeleton);
    this->TrailVFX->SetupAttachment(DroneSkeleton);
    this->Ak_RemixDrone->SetupAttachment(DroneSkeleton);
}

void ARemixDrone2::TimelineCallback(float val) {
}

void ARemixDrone2::TimedChallengeStart() {
}

void ARemixDrone2::TimedChallengeFinish(bool bIsPendingReset) {
}

void ARemixDrone2::RegeneratePickup() {
}

void ARemixDrone2::OnTimedChallengeAvailable(AActor* ManagerActor) {
}

void ARemixDrone2::OnRep_SplineDistance_Server() {
}

void ARemixDrone2::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARemixDrone2, SplineDistance_Server);
}


