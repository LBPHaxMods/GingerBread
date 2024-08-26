#include "CreatinatorTurretProjectileBase.h"
#include "AkComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/PointLightComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "CTProjectileMovementComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "SpotShadowComponent.h"

ACreatinatorTurretProjectileBase::ACreatinatorTurretProjectileBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionSphere"));

    this->CollisionSphere = (USphereComponent*)RootComponent;
    this->OverlapSphere = CreateDefaultSubobject<USphereComponent>(TEXT("OverlapSphere"));
    this->ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh"));
    this->SpotShadow = CreateDefaultSubobject<USpotShadowComponent>(TEXT("SpotShadow"));
    this->ProjectileTrail = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ProjectileTrail"));
    this->AK_ProjectileBase = CreateDefaultSubobject<UAkComponent>(TEXT("AK_ProjectileBase"));
    this->ProjectileMovementComponent = NULL;
    this->CTProjectileMovementComponent = CreateDefaultSubobject<UCTProjectileMovementComponent>(TEXT("PorjectileMovementComponent"));
    this->PointLightComponent = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLightComponent"));
    this->HitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
    this->ScaleTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("ScaleTimeline"));
    this->InteractionSphere = CreateDefaultSubobject<UInteractionComponent>(TEXT("InteractionSphere"));
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->ProjectileStart = NULL;
    this->ProjectileStop = NULL;
    this->AudioSwitchState = TEXT("cannon");
    this->ImpactVFX = NULL;
    this->MaxLifeSpan = 1.00f;
    this->ProjectileSize = 3.00f;
    this->ProjectileSpeed = 35.00f;
    this->ScaleCurve = NULL;
    this->CurrentState = ECreatinatorProjectileType::Pooled;
    this->OverlapSphere->SetupAttachment(RootComponent);
    this->ProjectileMesh->SetupAttachment(RootComponent);
    this->SpotShadow->SetupAttachment(RootComponent);
    this->ProjectileTrail->SetupAttachment(RootComponent);
    this->AK_ProjectileBase->SetupAttachment(RootComponent);
    this->PointLightComponent->SetupAttachment(RootComponent);
    this->InteractionSphere->SetupAttachment(RootComponent);
    this->GameplayTag->SetupAttachment(RootComponent);
}

void ACreatinatorTurretProjectileBase::UpdateScale(float ScaleAlpha) {
}

void ACreatinatorTurretProjectileBase::OnRep_CurrentState() {
}

void ACreatinatorTurretProjectileBase::OnOverlapSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ACreatinatorTurretProjectileBase::OnOverlapSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ACreatinatorTurretProjectileBase::OnInteractionSphereEndOverlap(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void ACreatinatorTurretProjectileBase::OnInteractionSphereBeginOverlap(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void ACreatinatorTurretProjectileBase::OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void ACreatinatorTurretProjectileBase::Multicast_ImpactVFX_Implementation(const FVector Location, const FRotator Rotation) {
}

void ACreatinatorTurretProjectileBase::InitialReplicationRateDurationElapsed() {
}

void ACreatinatorTurretProjectileBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACreatinatorTurretProjectileBase, CurrentState);
}


