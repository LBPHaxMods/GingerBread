#include "RhythmicCreatinatorTurretBase.h"
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
#include "PickupContainerComponent.h"
#include "ThrowTargetComponent.h"
#include "TriggerActorComponent.h"

ARhythmicCreatinatorTurretBase::ARhythmicCreatinatorTurretBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
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
    this->CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionSphere"));
    this->PickupContainer = CreateDefaultSubobject<UPickupContainerComponent>(TEXT("PickupContainer"));
    this->ThrowTarget = CreateDefaultSubobject<UThrowTargetComponent>(TEXT("ThrowTarget"));
    this->InteractionComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("InteractionComponent"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->CelebrationMontage = NULL;
    this->SlapMontage = NULL;
    this->StompStartMontage = NULL;
    this->StompEndMontage = NULL;
    this->ShootMontage = NULL;
    this->CelebrationMontageDelay = 1.93f;
    this->StompEndMontageDelay = 0.33f;
    this->YawOffset = 90.00f;
    this->ProjectileClass = NULL;
    this->ProjectileLifetime = 1.00f;
    this->ForwardOffset = 1.00f;
    this->UpOffset = 1.00f;
    this->ChargeDuration = 1.00f;
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
    this->BouncedOnImpact = NULL;
    this->SlapImpactObject = NULL;
    this->ImpactRolledInto = NULL;
    this->TurretDestroyed = NULL;
    this->DelayBeforeHelmetDestroy = 1.50f;
    this->HelmetScaleDownTime = 0.20f;
    this->HelmetScaleDownCurve = NULL;
    this->MaxNumProjectiles = 2;
    this->TurretMaterial = NULL;
    this->AlertAnimCooldown = 1.00f;
    this->TurretDynMat = NULL;
    this->IsDead = false;
    this->HelmetDestroySystem->SetupAttachment(HelmetSkeletalMesh);
    this->AK_CreatinatorTurret->SetupAttachment(BodySkeletalMesh);
    this->HitPoints->SetupAttachment(BodySkeletalMesh);
    this->CollisionSphere->SetupAttachment(BodySkeletalMesh);
    this->PickupContainer->SetupAttachment(RootComponent);
    this->ThrowTarget->SetupAttachment(BodySkeletalMesh);
    this->InteractionComponent->SetupAttachment(BodySkeletalMesh);
    this->BodySkeletalMesh->SetupAttachment(RootComponent);
    this->HelmetSkeletalMesh->SetupAttachment(BodySkeletalMesh);
    this->GamplayTags->SetupAttachment(HelmetSkeletalMesh);
    this->BlasterTarget->SetupAttachment(HelmetSkeletalMesh);
    this->HelmetChargingSystem->SetupAttachment(HelmetSkeletalMesh);
}

void ARhythmicCreatinatorTurretBase::PostMontagePlayed() {
}

void ARhythmicCreatinatorTurretBase::OnSackboyDamaged_Implementation(uint8 turretIndex) {
}

void ARhythmicCreatinatorTurretBase::OnRep_IsDead() {
}

void ARhythmicCreatinatorTurretBase::OnHelmetScaleUpdate(float ScaleAlpha) {
}

void ARhythmicCreatinatorTurretBase::OnHelmetScaleCompleteFunction() {
}

void ARhythmicCreatinatorTurretBase::DestroyHelmet() {
}

void ARhythmicCreatinatorTurretBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARhythmicCreatinatorTurretBase, IsDead);
}


