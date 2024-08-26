#include "Snowball.h"
#include "AkComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "HitPointsComponent.h"
#include "HitPointsModifierComponent.h"
#include "SpotShadowComponent.h"
#include "VirtualConstraintComponent.h"

ASnowball::ASnowball(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Capsule Component"));
    this->VirtualConstraint = CreateDefaultSubobject<UVirtualConstraintComponent>(TEXT("Virtual Constraint Component"));
    this->RayOffsets.AddDefaulted(4);
    this->RayLengths.AddDefaulted(4);
    this->SphereComponent = (USphereComponent*)RootComponent;
    this->OverlapSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Overlap Sphere"));
    this->StaticRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Static Root"));
    this->RotatingRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Rotating Root"));
    this->HitPointsComponent = CreateDefaultSubobject<UHitPointsComponent>(TEXT("Hit Points Component"));
    this->AudioComponent = CreateDefaultSubobject<UAkComponent>(TEXT("SnowBall AudioComponent"));
    this->SpotShadowComponent = CreateDefaultSubobject<USpotShadowComponent>(TEXT("Spot Shadow Component"));
    this->SeatSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Seat Component"));
    this->PassiveHitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("Passive HitPoints Modifier"));
    this->AttackHitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("Attack HitPoints Modifier"));
    this->RollHitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("Roll HitPoints Modifier"));
    this->bShowSnowballDebug = false;
    this->HapticsAudioComponent = CreateDefaultSubobject<UAkComponent>(TEXT("SnowBall HapticsAudioComponent"));
    this->FallingSnow = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Falling Snow"));
    this->TurbulentSnow = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Turbulent Snow"));
    this->GroundTrail = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Ground Trail"));
    this->AirTrail = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Air Trail"));
    this->ImpactSnow = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Impact Snow"));
    this->AttackShockwave = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Attack Shockwave"));
    this->EnterEffectTransitionTime = 0.30f;
    this->ExitEffectTransitionTime = 0.30f;
    this->MaxSpeedCurve = NULL;
    this->AccelerationCurve = NULL;
    this->BreakingCurve = NULL;
    this->RotationLerpDown = 2.50f;
    this->BigBoostCooldown = 0.10f;
    this->SmallBoostCooldown = 0.10f;
    this->ImpactSizeThreshhold = 15.00f;
    this->BoostVerticalDuration = 0.20f;
    this->BoostVerticalPower = 1.00f;
    this->BoostVerticalSpeed = 80.00f;
    this->SmallBoostPenaltyDuration = 1.50f;
    this->SmallBoostPenaltyPower = 1.00f;
    this->SmallBoostPenaltySpeed = 15.00f;
    this->PostAttackGravityMuliplier = 1.30f;
    this->ReactiveBumpCooldown = 0.30f;
    this->MinimumSlopeAngle = 5.00f;
    this->SlopeSensitivity = 0.60f;
    this->SmallRumbleThreshold = 1.00f;
    this->RumbleModifier = 1.00f;
    this->MaxRumbleVelocity = 250.00f;
    this->SpeedRumbleCurve = NULL;
    this->SnowballEnterAudio = NULL;
    this->SnowballExitAudio = NULL;
    this->SnowballLandAudio = NULL;
    this->SnowballJumpAudio = NULL;
    this->SnowballBoostAudio = NULL;
    this->SnowballCollisionAudio = NULL;
    this->SnowballRollAudio = NULL;
    this->SnowballStopRollAudio = NULL;
    this->SnowballSpeedRTPCName = TEXT("snowball_speed");
    this->SnowballVehicleSwitchName = TEXT("sackboy_snowball");
    this->SnowballEnterHapticEvent = NULL;
    this->SnowballExitHapticEvent = NULL;
    this->SnowballLandHapticEvent = NULL;
    this->SnowballJumpHapticEvent = NULL;
    this->SnowballBoostHapticEvent = NULL;
    this->ChipShotHapticEvent = NULL;
    this->SnowballRollHapticEvent = NULL;
    this->SnowballStopRollHapticEvent = NULL;
    this->SnowballHapticSpeedRTPCName = TEXT("vib_snowball_speed");
    this->ReactiveBumpImpulseForce = 60.00f;
    this->ReactiveBumpVerticalForce = 40.00f;
    this->StaticRootComponent->SetupAttachment(RootComponent);
    this->RotatingRootComponent->SetupAttachment(RootComponent);
    this->HitPointsComponent->SetupAttachment(StaticRootComponent);
    this->AudioComponent->SetupAttachment(StaticRootComponent);
    this->SpotShadowComponent->SetupAttachment(StaticRootComponent);
    this->SeatSceneComponent->SetupAttachment(StaticRootComponent);
    this->HapticsAudioComponent->SetupAttachment(StaticRootComponent);
    this->FallingSnow->SetupAttachment(StaticRootComponent);
    this->TurbulentSnow->SetupAttachment(StaticRootComponent);
    this->GroundTrail->SetupAttachment(StaticRootComponent);
    this->AirTrail->SetupAttachment(StaticRootComponent);
    this->ImpactSnow->SetupAttachment(StaticRootComponent);
    this->AttackShockwave->SetupAttachment(StaticRootComponent);
    this->OverlapSphere->SetupAttachment(RootComponent);
}





