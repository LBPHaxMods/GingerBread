#include "PopshotProjectile.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "AIProjectileMovementComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "SpotShadowComponent.h"

APopshotProjectile::APopshotProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetUseOwnerRelevancy = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
    this->SphereCollision = (USphereComponent*)RootComponent;
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->DamageCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("DamageCollider"));
    this->DamageInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("DamageInteraction"));
    this->SpotShadow = CreateDefaultSubobject<USpotShadowComponent>(TEXT("SpotShadow"));
    this->HitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
    this->AIProjectileMovement = CreateDefaultSubobject<UAIProjectileMovementComponent>(TEXT("AIProjectileMovement"));
    this->ShotTrailVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ShotTrailVFX"));
    this->DamageInteraction->SetupAttachment(Mesh);
    this->SpotShadow->SetupAttachment(Mesh);
    this->ShotTrailVFX->SetupAttachment(RootComponent);
    this->Mesh->SetupAttachment(RootComponent);
    this->DamageCollider->SetupAttachment(Mesh);
}

void APopshotProjectile::OnSphereHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}


void APopshotProjectile::Fire_Implementation(const FVector& StartLocation, const FRotator& StartRotation, const FVector& Velocity, float RotationRate, float GravityScale, const TArray<FPopshotProjectileBounceParams>& InBounceParams) {
}


