#include "BlowDart.h"
#include "AkComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/StaticMeshComponent.h"
#include "HitPointsComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "ThrowTargetComponent.h"

ABlowDart::ABlowDart(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DartMesh"));

    this->Speed = 100.00f;
    this->CanBeBlocked = true;
    this->LifeTime = 4.00f;
    this->PierceSackboys = false;
    this->CanBeBurned = true;
    this->IgnoreOtherBlowDartActorCollisions = false;
    this->DartTrailVFXDeactivateTime = 2.00f;
    this->DartMeshComponent = (UStaticMeshComponent*)RootComponent;
    this->MeshInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("MeshInteraction"));
    this->CuttableInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("CuttableInteraction"));
    this->DartTrailVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Dart_Trail_VFX"));
    this->DartPropellerVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Dart_Propeller_VFX"));
    this->DartFireVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Dart_Fire_VFX"));
    this->ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
    this->HitPointsModifierComponent = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
    this->HitPointsComponent = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPoints"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->ThrowTargetComponent = CreateDefaultSubobject<UThrowTargetComponent>(TEXT("ThrowTargetComponent"));
    this->bIsOnFire = false;
    this->bIsActive = false;
    this->DartExplosionVFX = NULL;
    this->DartTrapDeath = NULL;
    this->DartTrapTravel = NULL;
    this->DartTrapTravelStop = NULL;
    this->DartTrapHaptics = NULL;
    this->DartTrapHapticsStop = NULL;
    this->MeshInteraction->SetupAttachment(RootComponent);
    this->CuttableInteraction->SetupAttachment(RootComponent);
    this->DartTrailVFX->SetupAttachment(RootComponent);
    this->DartPropellerVFX->SetupAttachment(RootComponent);
    this->DartFireVFX->SetupAttachment(RootComponent);
    this->AkComponent->SetupAttachment(RootComponent);
    this->ThrowTargetComponent->SetupAttachment(RootComponent);
}

void ABlowDart::TurnOnCollisions() {
}

void ABlowDart::PlayOnHitVFX_Implementation(FVector Location) {
}

void ABlowDart::OnRep_OnFire() {
}

void ABlowDart::OnRep_Active() {
}

void ABlowDart::EnableCollisions() {
}

void ABlowDart::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABlowDart, Speed);
    DOREPLIFETIME(ABlowDart, bIsOnFire);
    DOREPLIFETIME(ABlowDart, bIsActive);
}


