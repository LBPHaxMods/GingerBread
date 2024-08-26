#include "CreatinatorQuadTurretProjectileBase.h"
#include "AkComponent.h"
#include "Components/PointLightComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "Components/TimelineComponent.h"
#include "CTProjectileMovementComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "SpotShadowComponent.h"

ACreatinatorQuadTurretProjectileBase::ACreatinatorQuadTurretProjectileBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

    this->TurretSpacing = 10.00f;
    this->ProjectileStaticMesh = NULL;
    this->Root = (USceneComponent*)RootComponent;
    this->CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionSphere"));
    this->OverlapSphere = CreateDefaultSubobject<USphereComponent>(TEXT("OverlapSphere"));
    this->InteractionSphere = CreateDefaultSubobject<UInteractionComponent>(TEXT("InteractionSphere"));
    this->SpotShadow = CreateDefaultSubobject<USpotShadowComponent>(TEXT("SpotShadow"));
    this->PointLightComponent = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLightComponent"));
    this->CTProjectileMovementComponent = CreateDefaultSubobject<UCTProjectileMovementComponent>(TEXT("PorjectileMovementComponent"));
    this->HitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
    this->ScaleTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("ScaleTimeline"));
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->AK_ProjectileBase = CreateDefaultSubobject<UAkComponent>(TEXT("AK_ProjectileBase"));
    this->ProjectileTrailComp[0] = NULL;
    this->ProjectileTrailComp[1] = NULL;
    this->ProjectileTrailComp[2] = NULL;
    this->ProjectileTrailComp[3] = NULL;
    this->CollisionSphereComp[0] = NULL;
    this->CollisionSphereComp[1] = NULL;
    this->CollisionSphereComp[2] = NULL;
    this->CollisionSphereComp[3] = NULL;
    this->OverlapSphereComp[0] = NULL;
    this->OverlapSphereComp[1] = NULL;
    this->OverlapSphereComp[2] = NULL;
    this->OverlapSphereComp[3] = NULL;
    this->InteractionSphereComp[0] = NULL;
    this->InteractionSphereComp[1] = NULL;
    this->InteractionSphereComp[2] = NULL;
    this->InteractionSphereComp[3] = NULL;
    this->ProjectileMeshComp[0] = NULL;
    this->ProjectileMeshComp[1] = NULL;
    this->ProjectileMeshComp[2] = NULL;
    this->ProjectileMeshComp[3] = NULL;
    this->SpotShadowComp[0] = NULL;
    this->SpotShadowComp[1] = NULL;
    this->SpotShadowComp[2] = NULL;
    this->SpotShadowComp[3] = NULL;
    this->PointLightComp[0] = NULL;
    this->PointLightComp[1] = NULL;
    this->PointLightComp[2] = NULL;
    this->PointLightComp[3] = NULL;
    this->ProjectileTrailEffect = NULL;
    this->ProjectileStart = NULL;
    this->ProjectileStop = NULL;
    this->AudioSwitchState = TEXT("cannon");
    this->ImpactVFX = NULL;
    this->TimeoutVFX = NULL;
    this->MaxLifeSpan = 1.00f;
    this->ProjectileSize = 3.00f;
    this->ProjectileSpeed = 35.00f;
    this->ScaleCurve = NULL;
    this->CurrentState = ECreatinatorProjectileType::Pooled;
    this->EnabledTurrets = 0;
    this->IsDead = 15;
    this->GameplayTag->SetupAttachment(RootComponent);
    this->AK_ProjectileBase->SetupAttachment(RootComponent);
}

void ACreatinatorQuadTurretProjectileBase::UpdateScale(float ScaleAlpha) {
}

void ACreatinatorQuadTurretProjectileBase::StaggeredReturnToPool() {
}

void ACreatinatorQuadTurretProjectileBase::OnRep_IsDead(uint8 previousDead) {
}

void ACreatinatorQuadTurretProjectileBase::OnRep_EnabledTurrets() {
}

void ACreatinatorQuadTurretProjectileBase::OnRep_CurrentState() {
}

void ACreatinatorQuadTurretProjectileBase::OnOverlapSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ACreatinatorQuadTurretProjectileBase::OnOverlapSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ACreatinatorQuadTurretProjectileBase::OnInteractionSphereEndOverlap(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void ACreatinatorQuadTurretProjectileBase::OnInteractionSphereBeginOverlap(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void ACreatinatorQuadTurretProjectileBase::OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void ACreatinatorQuadTurretProjectileBase::Multicast_TimeoutVfx_Implementation(const FVector Location, const FRotator Rotation) {
}

void ACreatinatorQuadTurretProjectileBase::Multicast_ImpactVFX_Implementation(const FVector Location, const FRotator Rotation) {
}

void ACreatinatorQuadTurretProjectileBase::InitialReplicationRateDurationElapsed() {
}

void ACreatinatorQuadTurretProjectileBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACreatinatorQuadTurretProjectileBase, CurrentState);
    DOREPLIFETIME(ACreatinatorQuadTurretProjectileBase, EnabledTurrets);
    DOREPLIFETIME(ACreatinatorQuadTurretProjectileBase, IsDead);
}


