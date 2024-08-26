#include "StompySpacePylon.h"
#include "AkComponent.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "StompySpaceLinkComponent.h"

AStompySpacePylon::AStompySpacePylon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
    this->PylonCapsule = (UCapsuleComponent*)RootComponent;
    this->PylonMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PylonMesh"));
    this->LaserLinkPoint = CreateDefaultSubobject<USceneComponent>(TEXT("LaserLinkPoint"));
    this->TopDamageCollider = CreateDefaultSubobject<USphereComponent>(TEXT("TopDamageCollider"));
    this->TopDamageInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("TopDamageInteraction"));
    this->PylonVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("PylonVFX"));
    this->PylonAK = CreateDefaultSubobject<UAkComponent>(TEXT("PylonAK"));
    this->LinkComponent = CreateDefaultSubobject<UStompySpaceLinkComponent>(TEXT("SpaceLinkComponent"));
    this->HitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
    this->IsActive = false;
    this->PylonMesh->SetupAttachment(RootComponent);
    this->LaserLinkPoint->SetupAttachment(PylonMesh);
    this->TopDamageCollider->SetupAttachment(PylonMesh);
    this->TopDamageInteraction->SetupAttachment(TopDamageCollider);
    this->PylonVFX->SetupAttachment(PylonMesh);
    this->PylonAK->SetupAttachment(RootComponent);
}

void AStompySpacePylon::OnRep_Active() {
}



void AStompySpacePylon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AStompySpacePylon, IsActive);
}


