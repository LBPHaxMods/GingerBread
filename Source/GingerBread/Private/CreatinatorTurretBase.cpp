#include "CreatinatorTurretBase.h"
#include "AkComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "BlastersTargetComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "NetworkEventComponent.h"
#include "OverlapManagerComponent.h"
#include "PickupContainerComponent.h"
#include "ThrowTargetComponent.h"
#include "TriggerActorComponent.h"

ACreatinatorTurretBase::ACreatinatorTurretBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BasePlate"));

    this->BodySkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BodySkeletalMesh"));
    this->HelmetSkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("HelmetSkeletalMesh"));
    this->GamplayTags = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GamplayTags"));
    this->BlasterTarget = CreateDefaultSubobject<UBlastersTargetComponent>(TEXT("BlasterTarget"));
    this->HelmetChargingSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("HelmetChargingSystem"));
    this->HelmetDestroySystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("HelmetDestroySystem"));
    this->AK_CreatinatorTurret = CreateDefaultSubobject<UAkComponent>(TEXT("AK_CreatinatorTurret"));
    this->BasePlate = (UStaticMeshComponent*)RootComponent;
    this->HitPoints = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPoints"));
    this->DetectionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("DetectionSphere"));
    this->InteractionDetectionSphere = CreateDefaultSubobject<UInteractionComponent>(TEXT("InteractionDetectionSphere"));
    this->CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionSphere"));
    this->PickupContainer = CreateDefaultSubobject<UPickupContainerComponent>(TEXT("PickupContainer"));
    this->NetworkEventComponent = CreateDefaultSubobject<UNetworkEventComponent>(TEXT("NetworkComponent"));
    this->ThrowTargetComponent = CreateDefaultSubobject<UThrowTargetComponent>(TEXT("ThrowTargetComponent"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->OverlapManager = CreateDefaultSubobject<UOverlapManagerComponent>(TEXT("OverlapManager"));
    this->NoticeMontage = NULL;
    this->NoticeExitMontage = NULL;
    this->CelebrationMontage = NULL;
    this->SlapMontage = NULL;
    this->StompMontage = NULL;
    this->PatrolMontage = NULL;
    this->NoticeMontageDelay = 0.93f;
    this->NoticeExitMontageDelay = 1.00f;
    this->CelebrationMontageDelay = 1.93f;
    this->SlappedMontageDelay = 1.03f;
    this->StompMontageDelay = 0.60f;
    this->PatrolMontageDelay = 1.83f;
    this->AnticipateDelay = 0.40f;
    this->TrackingYawSpeed = 100.00f;
    this->TrackingPitchSpeed = 100.00f;
    this->BodyPitchRange = 80.00f;
    this->MaxBodyPitchRange = 80.00f;
    this->LimitYaw = false;
    this->YawRange = 120.00f;
    this->YawOffset = 90.00f;
    this->TrackingRange = 32.00f;
    this->StartDelay = 0.20f;
    this->DelayBetweenShots = 1.00f;
    this->ProjectilesPerBurst = 1;
    this->DelayBetweenBurstsOfShots = 2.00f;
    this->ShootMode = ECreatinatorTurretShootMode::TrackPlayers;
    this->ProjectileClass = NULL;
    this->ProjectileLifetime = 1.00f;
    this->ForwardOffset = 1.00f;
    this->UpOffset = 1.00f;
    this->MuzzleFlashEffect = NULL;
    this->DeathConfetti = NULL;
    this->HelmetDestroyedTemplate = NULL;
    this->CreatinatorTurretAudioEvents = NULL;
    this->EnemyImpactSlap = NULL;
    this->EnemyImpactHeadStomp = NULL;
    this->EnemyImpactJumpedOn = NULL;
    this->EnemyImpactCutter = NULL;
    this->EnemyImpactPlasma = NULL;
    this->EnemyImpactPlasmaHeavy = NULL;
    this->VolatileImpact = NULL;
    this->BouncedOnImpact = NULL;
    this->SlapImpactObject = NULL;
    this->ImpactRolledInto = NULL;
    this->TurretDestroyed = NULL;
    this->DelayBeforeHelmetDestroy = 1.50f;
    this->HelmetScaleDownTime = 0.20f;
    this->HelmetScaleDownCurve = NULL;
    this->MaxNumProjectiles = 2;
    this->TurretMaterial = NULL;
    this->Activated = true;
    this->AlertAnimCooldown = 1.00f;
    this->TurretDynMat = NULL;
    this->CurrentState = ECreatinatorTurretState::Manual;
    this->IsDead = false;
    this->HandledStartDelay = false;
    this->BodySkeletalMesh->SetupAttachment(RootComponent);
    this->HelmetSkeletalMesh->SetupAttachment(BodySkeletalMesh);
    this->GamplayTags->SetupAttachment(HelmetSkeletalMesh);
    this->BlasterTarget->SetupAttachment(HelmetSkeletalMesh);
    this->HelmetChargingSystem->SetupAttachment(HelmetSkeletalMesh);
    this->HelmetDestroySystem->SetupAttachment(HelmetSkeletalMesh);
    this->AK_CreatinatorTurret->SetupAttachment(BodySkeletalMesh);
    this->HitPoints->SetupAttachment(BodySkeletalMesh);
    this->DetectionSphere->SetupAttachment(BodySkeletalMesh);
    this->InteractionDetectionSphere->SetupAttachment(BodySkeletalMesh);
    this->CollisionSphere->SetupAttachment(BodySkeletalMesh);
    this->PickupContainer->SetupAttachment(RootComponent);
    this->ThrowTargetComponent->SetupAttachment(BodySkeletalMesh);
}

void ACreatinatorTurretBase::RunPatrolAnimation() {
}

void ACreatinatorTurretBase::RunIdleState() {
}

void ACreatinatorTurretBase::ResetAlert() {
}

void ACreatinatorTurretBase::ReleaseHelmet(bool backwards) {
}

void ACreatinatorTurretBase::PostShootingTimerDelay() {
}

void ACreatinatorTurretBase::PostShootEvent() {
}

void ACreatinatorTurretBase::PostMontagePlayed() {
}

void ACreatinatorTurretBase::PostAnticipateEvent() {
}

void ACreatinatorTurretBase::OnSackboyDamaged_Implementation(uint8 turretIndex) {
}

void ACreatinatorTurretBase::OnRep_TargetSackboy() {
}

void ACreatinatorTurretBase::OnRep_IsDead() {
}

void ACreatinatorTurretBase::OnRep_CurrentState() {
}

void ACreatinatorTurretBase::OnRep_Activated() {
}

void ACreatinatorTurretBase::OnNetworkEvent(FName EventName) {
}

void ACreatinatorTurretBase::OnHelmetScaleUpdate(float ScaleAlpha) {
}

void ACreatinatorTurretBase::OnHelmetScaleCompleteFunction() {
}

void ACreatinatorTurretBase::OnEndOverlapLastSackboy(UOverlapManagerComponent* OverlapManagerComponent, UPrimitiveComponent* OverlappedComponent, ASackboy* OtherSackboy, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ACreatinatorTurretBase::OnEndOverlapAnySackboy(UOverlapManagerComponent* OverlapManagerComponent, UPrimitiveComponent* OverlappedComponent, ASackboy* OtherSackboy, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ACreatinatorTurretBase::OnEndInteractionLastSackboy(UOverlapManagerComponent* OverlapManagerComponent, UInteractionComponent* OverlappedComponent, ASackboy* OtherSackboy, UInteractionComponent* OtherComp) {
}

void ACreatinatorTurretBase::OnEndInteractionAnySackboy(UOverlapManagerComponent* OverlapManagerComponent, UInteractionComponent* OverlappedComponent, ASackboy* OtherSackboy, UInteractionComponent* OtherComp) {
}

void ACreatinatorTurretBase::OnBeginOverlapFirstSackboy(UOverlapManagerComponent* OverlapManagerComponent, UPrimitiveComponent* OverlappedComponent, ASackboy* OtherSackboy, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ACreatinatorTurretBase::OnBeginInteractionFirstSackboy(UOverlapManagerComponent* OverlapManagerComponent, UInteractionComponent* OverlappedComponent, ASackboy* OtherSackboy, UInteractionComponent* OtherComp) {
}

void ACreatinatorTurretBase::DestroyHelmet() {
}


void ACreatinatorTurretBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACreatinatorTurretBase, Activated);
    DOREPLIFETIME(ACreatinatorTurretBase, TargetSackboy);
    DOREPLIFETIME(ACreatinatorTurretBase, CurrentState);
    DOREPLIFETIME(ACreatinatorTurretBase, IsDead);
}


