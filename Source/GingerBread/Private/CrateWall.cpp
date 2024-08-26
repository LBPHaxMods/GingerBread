#include "CrateWall.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "TriggerActorComponent.h"

ACrateWall::ACrateWall(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));

    this->Collision = (UBoxComponent*)RootComponent;
    this->CrateStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CrateStaticMesh"));
    this->DamagedCrateStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DamagedCrateStaticMesh"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->DamagedAudioEvent = NULL;
    this->ParticlesOnDestroy = NULL;
    this->TorqueForceOnDestroy = 50.00f;
    this->PieceDestroyDelay = 0.10f;
    this->PieceDestroyStartDelay = 1.00f;
    this->AudioEvent = NULL;
    this->DestroyHapticsEvent = NULL;
    this->DestroyCutsceneHapticsEvent = NULL;
    this->DamagedMaterial = NULL;
    this->OuterPieceCount = 1;
    this->InnerPieceCount = 2;
    this->DestroyParticles = NULL;
    this->CurrentCrateState = ECrateState::Intact;
    this->CrateStaticMesh->SetupAttachment(RootComponent);
    this->DamagedCrateStaticMesh->SetupAttachment(CrateStaticMesh);
}

void ACrateWall::OnRep_State() {
}

void ACrateWall::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACrateWall, CurrentCrateState);
}


