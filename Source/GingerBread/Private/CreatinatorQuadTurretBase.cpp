#include "CreatinatorQuadTurretBase.h"
#include "AkComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsComponent.h"
#include "Net/UnrealNetwork.h"
#include "NetworkEventComponent.h"
#include "TriggerActorComponent.h"

ACreatinatorQuadTurretBase::ACreatinatorQuadTurretBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

    this->EnabledTurrets = EEnabledTurrets::eEnabled_Turrets_Mask;
    this->TurretSpacing = 10.00f;
    this->BodySkeletalMesh = NULL;
    this->BodyBluprintAnimationClass = NULL;
    this->HelmetSkeletalMesh = NULL;
    this->BasePlateMesh = NULL;
    this->Root = (USceneComponent*)RootComponent;
    this->BasePlateComp[0] = NULL;
    this->BasePlateComp[1] = NULL;
    this->BasePlateComp[2] = NULL;
    this->BasePlateComp[3] = NULL;
    this->BodySkeletalMeshComp[0] = NULL;
    this->BodySkeletalMeshComp[1] = NULL;
    this->BodySkeletalMeshComp[2] = NULL;
    this->BodySkeletalMeshComp[3] = NULL;
    this->HelmetSkeletalMeshComp[0] = NULL;
    this->HelmetSkeletalMeshComp[1] = NULL;
    this->HelmetSkeletalMeshComp[2] = NULL;
    this->HelmetSkeletalMeshComp[3] = NULL;
    this->GamplayTags = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GamplayTags"));
    this->HelmetChargingSystemComp[0] = NULL;
    this->HelmetChargingSystemComp[1] = NULL;
    this->HelmetChargingSystemComp[2] = NULL;
    this->HelmetChargingSystemComp[3] = NULL;
    this->HelmetDestroySystemComp[0] = NULL;
    this->HelmetDestroySystemComp[1] = NULL;
    this->HelmetDestroySystemComp[2] = NULL;
    this->HelmetDestroySystemComp[3] = NULL;
    this->AK_CreatinatorTurret = CreateDefaultSubobject<UAkComponent>(TEXT("AK_CreatinatorTurret"));
    this->HitPoints = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPoints"));
    this->CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionSphere"));
    this->CollisionSphereComp[0] = NULL;
    this->CollisionSphereComp[1] = NULL;
    this->CollisionSphereComp[2] = NULL;
    this->CollisionSphereComp[3] = NULL;
    this->NetworkEventComponent = CreateDefaultSubobject<UNetworkEventComponent>(TEXT("NetworkComponent"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->CelebrationMontage = NULL;
    this->SlapMontage = NULL;
    this->StompMontage = NULL;
    this->CelebrationMontageDelay = 1.93f;
    this->SlappedMontageDelay = 1.03f;
    this->StompMontageDelay = 0.60f;
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
    this->QuadProjectileClass = NULL;
    this->ProjectileLifetime = 1.00f;
    this->ForwardOffset = 1.00f;
    this->UpOffset = 1.00f;
    this->HelmetChargingEffect = NULL;
    this->HelmetDestroySystemEffect = NULL;
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
    this->MaxNumProjectiles = 8;
    this->TurretMaterial = NULL;
    this->Activated = true;
    this->AlertAnimCooldown = 1.00f;
    this->TurretDynMat = NULL;
    this->ScaleDownHelmetTimeline[0] = NULL;
    this->ScaleDownHelmetTimeline[1] = NULL;
    this->ScaleDownHelmetTimeline[2] = NULL;
    this->ScaleDownHelmetTimeline[3] = NULL;
    this->IsDead = 0;
    this->HandledStartDelay = false;
    this->HitPoints->SetupAttachment(RootComponent);
    this->GamplayTags->SetupAttachment(RootComponent);
    this->AK_CreatinatorTurret->SetupAttachment(RootComponent);
}

void ACreatinatorQuadTurretBase::TurretShootDelegate(uint8 turretIndex) {
}

void ACreatinatorQuadTurretBase::RunIdleState() {
}

void ACreatinatorQuadTurretBase::ReleaseHelmet(bool backwards, uint8 turretIndex) {
}

void ACreatinatorQuadTurretBase::PostShootEvent() {
}

void ACreatinatorQuadTurretBase::PostMontagePlayed(uint8 turretIndex) {
}

void ACreatinatorQuadTurretBase::PostAnticipateEvent() {
}

void ACreatinatorQuadTurretBase::OnSackboyDamaged_Implementation(uint8 turretIndex) {
}

void ACreatinatorQuadTurretBase::OnRep_IsDead(uint8 previousDead) {
}

void ACreatinatorQuadTurretBase::OnRep_Activated() {
}

void ACreatinatorQuadTurretBase::OnNetworkEvent(FName EventName) {
}

void ACreatinatorQuadTurretBase::OnHelmetScaleUpdate3(float ScaleAlpha) {
}

void ACreatinatorQuadTurretBase::OnHelmetScaleUpdate2(float ScaleAlpha) {
}

void ACreatinatorQuadTurretBase::OnHelmetScaleUpdate1(float ScaleAlpha) {
}

void ACreatinatorQuadTurretBase::OnHelmetScaleUpdate0(float ScaleAlpha) {
}

void ACreatinatorQuadTurretBase::OnHelmetScaleCompleteFunction3() {
}

void ACreatinatorQuadTurretBase::OnHelmetScaleCompleteFunction2() {
}

void ACreatinatorQuadTurretBase::OnHelmetScaleCompleteFunction1() {
}

void ACreatinatorQuadTurretBase::OnHelmetScaleCompleteFunction0() {
}

UCreatinatorAnimInstace* ACreatinatorQuadTurretBase::GetAnimInstance(uint8 turretIndex) {
    return NULL;
}

void ACreatinatorQuadTurretBase::DestroyHelmet(uint8 turretIndex) {
}

void ACreatinatorQuadTurretBase::ChargeNextTurretDelegate(uint8 turretIndex) {
}


void ACreatinatorQuadTurretBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACreatinatorQuadTurretBase, Activated);
    DOREPLIFETIME(ACreatinatorQuadTurretBase, IsDead);
}


