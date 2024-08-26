#include "Boomblebee.h"
#include "AkComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/TimelineComponent.h"
#include "BlastersTargetComponent.h"
#include "CraftCutterTargetComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsComponent.h"
#include "InteractionComponent.h"
#include "OverlapManagerComponent.h"
#include "PoIComponent.h"
#include "SpotShadowComponent.h"
#include "ThrowTargetComponent.h"

ABoomblebee::ABoomblebee(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionSphere"));

    this->CollisionSphere = (USphereComponent*)RootComponent;
    this->SackDetection = NULL;
    this->InteractSphere = CreateDefaultSubobject<UInteractionComponent>(TEXT("InteractSphere"));
    this->SackInteractDetection = CreateDefaultSubobject<UInteractionComponent>(TEXT("SackInteractDetection"));
    this->CraftCutterTarget = CreateDefaultSubobject<UCraftCutterTargetComponent>(TEXT("CraftCutterTarget"));
    this->BlastersTarget = CreateDefaultSubobject<UBlastersTargetComponent>(TEXT("BlastersTarget"));
    this->ThrowTarget = CreateDefaultSubobject<UThrowTargetComponent>(TEXT("ThrowTarget"));
    this->SpotShadow = CreateDefaultSubobject<USpotShadowComponent>(TEXT("SpotShadow"));
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->HomingFollowRoot = CreateDefaultSubobject<USceneComponent>(TEXT("HomingFollowRoot"));
    this->SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
    this->HomingPoint = CreateDefaultSubobject<USceneComponent>(TEXT("HomingPoint"));
    this->DebugSphere = NULL;
    this->ImpulseCheck = CreateDefaultSubobject<USphereComponent>(TEXT("ImpulseCheck"));
    this->RadialForce = NULL;
    this->ForceFeedback = NULL;
    this->BeeMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BeeMesh"));
    this->BeeTrailParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BeeTrailParticles"));
    this->POI = CreateDefaultSubobject<UPoIComponent>(TEXT("POI"));
    this->HurtBoxRoot = CreateDefaultSubobject<USceneComponent>(TEXT("HurtBoxRoot"));
    this->AkBoomblebee = CreateDefaultSubobject<UAkComponent>(TEXT("AkBoomblebee"));
    this->AkBoomblebeeHaptics = CreateDefaultSubobject<UAkComponent>(TEXT("AkBoomblebeeHaptics"));
    this->HitPoints = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPoints"));
    this->ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
    this->OverlapManager = CreateDefaultSubobject<UOverlapManagerComponent>(TEXT("OverlapManager"));
    this->TriggerActor = NULL;
    this->EaseInRubberBanding = CreateDefaultSubobject<UTimelineComponent>(TEXT("EaseInRubberBanding"));
    this->ReduceSpeed = CreateDefaultSubobject<UTimelineComponent>(TEXT("ReduceSpeed"));
    this->BeeFlashLerp = CreateDefaultSubobject<UTimelineComponent>(TEXT("BeeFlashLerp"));
    this->EnableGravity = CreateDefaultSubobject<UTimelineComponent>(TEXT("EnableGravity"));
    this->Flash = CreateDefaultSubobject<UTimelineComponent>(TEXT("Flash"));
    this->BeeLife = 7.50f;
    this->SpeedVariation = 6.00f;
    this->HomingPowerVariation = 6.00f;
    this->BeeInitialSpeed = 48.00f;
    this->RestrictedHeight = false;
    this->ImpulsePower = 10.00f;
    this->PopDeath = true;
    this->RubberBandingOffset = 12.00f;
    this->EaseRBRate = 3.00f;
    this->HeightRestrictionUp = -17.50f;
    this->HeightRestrictionDown = -5.00f;
    this->RubberBandingPower = 0.80f;
    this->ExplosionClass = NULL;
    this->HomingPositionAlongSpringArm = 8.00f;
    this->SpringArmLength = 25.00f;
    this->BeeDefaultSpeed = 18.00f;
    this->RestrictedAxis = EPlaneConstraintAxisSetting::Custom;
    this->HeightAdjustRate = 0.00f;
    this->StepUpFlash = false;
    this->DeathSFX = NULL;
    this->BeeHiveOutAudio = NULL;
    this->BeeMovementLoopAudio = NULL;
    this->BeeDeathPopAudio = NULL;
    this->BeeBuzzLoopHapticEvent = NULL;
    this->DeathAnim = NULL;
    this->DeathVFX = NULL;
    this->DeathExplosionVFX = NULL;
    this->EaseInRubberBandingAlphaCurve = NULL;
    this->ReduceSpeedAlphaCurve = NULL;
    this->EnableGravityAlphaCurve = NULL;
    this->BeeFlashLerpAlphaCurve = NULL;
    this->FlashAlphaCurve = NULL;
    this->InteractSphere->SetupAttachment(RootComponent);
    this->SackInteractDetection->SetupAttachment(RootComponent);
    this->CraftCutterTarget->SetupAttachment(RootComponent);
    this->BlastersTarget->SetupAttachment(RootComponent);
    this->ThrowTarget->SetupAttachment(RootComponent);
    this->SpotShadow->SetupAttachment(RootComponent);
    this->GameplayTag->SetupAttachment(RootComponent);
    this->HomingFollowRoot->SetupAttachment(RootComponent);
    this->SpringArm->SetupAttachment(HomingFollowRoot);
    this->HomingPoint->SetupAttachment(SpringArm);
    this->ImpulseCheck->SetupAttachment(RootComponent);
    this->BeeMesh->SetupAttachment(RootComponent);
    this->BeeTrailParticles->SetupAttachment(BeeMesh);
    this->POI->SetupAttachment(BeeMesh);
    this->HurtBoxRoot->SetupAttachment(RootComponent);
    this->AkBoomblebee->SetupAttachment(RootComponent);
    this->AkBoomblebeeHaptics->SetupAttachment(RootComponent);
    this->HitPoints->SetupAttachment(RootComponent);
}

void ABoomblebee::ReduceSpeed_Update(const float speedAlpha) {
}

void ABoomblebee::ReduceSpeed_Finished() {
}

void ABoomblebee::OnEndInteractionAnySackboy(UOverlapManagerComponent* pOverlapManagerComponent, UInteractionComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UInteractionComponent* pOtherComp) {
}

void ABoomblebee::OnCollisionSphereHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void ABoomblebee::OnBeginInteractionAnySackboy(UOverlapManagerComponent* pOverlapManagerComponent, UInteractionComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UInteractionComponent* pOtherComp) {
}

void ABoomblebee::Flash_Update(const float flashAlpha) {
}

void ABoomblebee::EnableGravity_Update(const float gravityAlpha) {
}

void ABoomblebee::EnableGravity_Finished() {
}

void ABoomblebee::EaseInRubberBanding_Update(const float rbAlpha) {
}

void ABoomblebee::Die_Implementation(const EBeeDeathType reason) {
}

void ABoomblebee::BeeFlashLerp_Update(const float flashAlpha) {
}


