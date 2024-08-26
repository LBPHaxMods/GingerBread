#include "ShatteredMemoryOrb.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/PointLightComponent.h"
#include "GameFramework/RotatingMovementComponent.h"
#include "Components/StaticMeshComponent.h"
#include "CollectableHUDMoverComponent.h"
#include "Net/UnrealNetwork.h"
#include "SpotShadowComponent.h"

AShatteredMemoryOrb::AShatteredMemoryOrb(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShouldDestroyOnCollected = false;
    this->SpotShadow = CreateDefaultSubobject<USpotShadowComponent>(TEXT("SpotShadow"));
    this->OuterSphere = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("OuterSphere"));
    this->PointLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLight"));
    this->CollectableHUDMoverComponent = CreateDefaultSubobject<UCollectableHUDMoverComponent>(TEXT("CollectableHUDMoverComponent"));
    this->ParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleComponent"));
    this->RotatingMovementComponent = CreateDefaultSubobject<URotatingMovementComponent>(TEXT("RotatingMovementComponent"));
    this->MemoryOrbClass = NULL;
    this->Piece = 1;
    this->CollectParticle = NULL;
    this->MemoryOrbSpawnParticle = NULL;
    this->RewardVibration = NULL;
    this->RewardRumbleName = TEXT("PickedUpShatteredMemoryOrb");
    this->CollectionHapticEffectPS5 = NULL;
    this->SFXMemoryOrbCollect = NULL;
    this->GamepadAudioCollectionEvent = NULL;
    this->MemoryOrbRevealEvent = NULL;
    this->GhostedMaterialParameterTable = NULL;
    this->CameraEffect = NULL;
    this->SpotShadow->SetupAttachment(StaticMeshComponent);
    this->OuterSphere->SetupAttachment(StaticMeshComponent);
    this->PointLight->SetupAttachment(StaticMeshComponent);
    this->ParticleComponent->SetupAttachment(StaticMeshComponent);
}

void AShatteredMemoryOrb::OnShatteredOrbManagerAvailable(AActor* ManagerActor) {
}

void AShatteredMemoryOrb::OnRep_State() {
}

void AShatteredMemoryOrb::OnPlayerSaveCreated(const FGingerbreadPlayerId& PlayerId) {
}

void AShatteredMemoryOrb::HUDMovementEnded(UCollectableHUDMoverComponent* mover) {
}

void AShatteredMemoryOrb::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AShatteredMemoryOrb, State);
}


