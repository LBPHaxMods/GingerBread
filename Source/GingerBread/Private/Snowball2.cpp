#include "Snowball2.h"
#include "AkComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "OverlapManagerComponent.h"
#include "SpotShadowComponent.h"
#include "TriggerActorComponent.h"

ASnowball2::ASnowball2(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));

    this->Collision = (USphereComponent*)RootComponent;
    this->GroundTrailVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("GroundTrailVFX"));
    this->TrailVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("TrailVFX"));
    this->Cylinder = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cylinder"));
    this->SnowballBump = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SnowballBump"));
    this->SnowballSnow_SM = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SnowballSnow_SM"));
    this->Snowball_Snowfall_PS = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Snowball_Snowfall_PS"));
    this->SBProxy = NULL;
    this->StompKill = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StompKill"));
    this->P_PP_Juggernaut_ShockWave = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("P_PP_Juggernaut_ShockWave"));
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->ModifierSphere = CreateDefaultSubobject<USphereComponent>(TEXT("ModifierSphere"));
    this->HitPoints = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPoints"));
    this->AkSnowball2 = CreateDefaultSubobject<UAkComponent>(TEXT("AkSnowball2"));
    this->AkSnowball2Haptics = CreateDefaultSubobject<UAkComponent>(TEXT("AkSnowball2Haptics"));
    this->SnowballHemisphereOuter_Lower = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SnowballHemisphereOuter_Lower"));
    this->SnowballHemisphereInner_Lower = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SnowballHemisphereInner_Lower"));
    this->SnowballHemisphereOuter_Upper = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SnowballHemisphereOuter_Upper"));
    this->SnowballHemisphereInner_Upper = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SnowballHemisphereInner_Upper"));
    this->Snowball_Snowglobe_PS = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Snowball_Snowglobe_PS"));
    this->SpotShadow = CreateDefaultSubobject<USpotShadowComponent>(TEXT("SpotShadow"));
    this->P_PP_Juggernaut = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("P_PP_Juggernaut"));
    this->GameplayTag1 = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag1"));
    this->OverlapManager = CreateDefaultSubobject<UOverlapManagerComponent>(TEXT("OverlapManager"));
    this->HitPointsModifier_Master = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier_Master"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->BoostTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("Boost"));

    this->InteractionCollision = CreateDefaultSubobject<UInteractionComponent>(TEXT("InteractionCollision"));
    this->InteractionCylinder = CreateDefaultSubobject<UInteractionComponent>(TEXT("InteractionCylinder"));
    this->InteractionModifierSphere = CreateDefaultSubobject<UInteractionComponent>(TEXT("InteractionModifierSphere"));
    this->JumpHeight = 50.00f;
    this->SquareBoostPower = 125.00f;
    this->MaxAngularVelocity = 750.00f;
    this->SnowballRadius = 5.00f;
    this->BoostRotationMultiplier = 15.00f;
    this->AirControl = 3.00f;
    this->MaxLinearVelocity = 75.00f;
    this->RumbleModifier = 2.00f;
    this->OffGroundImpulseForce = -8.00f;
    this->SquareDashHeight = 45.00f;
    this->CircleBoostPower = 175.00f;
    this->BaseRotationRate = 75.00f;
    this->SpeedHelperRotationRate = 375.00f;
    this->BoostRotationRateModifier = 10.00f;
    this->RepulseSpeed = -30.00f;
    this->MinSpeedToUpdateSackboy = 2.00f;
    this->StarsBaseMaterial = NULL;
    this->MaximumInnerSnowSpawn = 60.00f;
    this->BoostRequiredPipeAngle = 0.50f;
    this->NormalAngularDamping = 1.00f;
    this->HandbrakeAngularDamping = 100.00f;
    this->HandbrakeSlopeLimit = 0.05f;
    this->RollDamageSpeedThreashold = 65.00f;
    this->EnterEffectTransitionTime = 0.30f;
    this->ExitEffectTransitionTime = 0.30f;
    this->SnowballControlScheme = NULL;
    this->EnemyExplosionFX = NULL;
    this->SnowballAbsorbVFX = NULL;
    this->SnowballExplodeVFX = NULL;
    this->SnowballLandingVFX = NULL;
    this->SnowballRollLoopAudio = NULL;
    this->SnowballRollLoopHaptic = NULL;
    this->SnowballRollStopAudio = NULL;
    this->SnowballRollStopHaptic = NULL;
    this->SnowballEnterAudio = NULL;
    this->SnowballEnterHaptic = NULL;
    this->SnowballEnterGamepadAudio = NULL;
    this->SnowballHopAudio = NULL;
    this->SnowballHopHaptic = NULL;
    this->SnowballLandAudio = NULL;
    this->SnowballLandHaptic = NULL;
    this->SnowballBoostAudio = NULL;
    this->SnowballBoostHaptic = NULL;
    this->SnowballExitAudio = NULL;
    this->SnowballExitHaptic = NULL;
    this->SnowballExitGamepadAudio = NULL;
    this->SnowballCollisionAudio = NULL;
    this->SnowballCollisionHaptic = NULL;
    this->SackboySnowballSwitchName = TEXT("sackboy_snowball");
    this->SackboyVoxJumpAudio = NULL;
    this->SackboyVoxJumpHaptic = NULL;
    this->SackboyVoxRollAudio = NULL;
    this->SackboyVoxRollHaptic = NULL;
    this->RumbleCurve = NULL;
    this->AccelerationCurve = NULL;
    this->BrakingCurve = NULL;
    this->MaxSpeedCurve = NULL;
    this->RollingRumbleIntensity = NULL;
    this->AccelerationRumbleIntensity = NULL;
    this->BoostTimelineRotationRateCurve = NULL;
    this->BumpForceFeedback = NULL;
    this->HalfPipeForceFeedback = NULL;
    this->AUTH_Sackboy = NULL;
    this->PreviousSackboy = NULL;
    this->CanJump = true;
    this->CanBoost = true;
    this->InteractionCylinder->SetupAttachment(RootComponent);
    this->InteractionModifierSphere->SetupAttachment(RootComponent);
    this->GroundTrailVFX->SetupAttachment(RootComponent);
    this->TrailVFX->SetupAttachment(RootComponent);
    this->Cylinder->SetupAttachment(RootComponent);
    this->SnowballBump->SetupAttachment(Cylinder);
    this->SnowballSnow_SM->SetupAttachment(Cylinder);
    this->Snowball_Snowfall_PS->SetupAttachment(Cylinder);
    this->StompKill->SetupAttachment(Cylinder);
    this->P_PP_Juggernaut_ShockWave->SetupAttachment(Cylinder);
    this->GameplayTag->SetupAttachment(RootComponent);
    this->ModifierSphere->SetupAttachment(RootComponent);
    this->HitPoints->SetupAttachment(RootComponent);
    this->AkSnowball2->SetupAttachment(RootComponent);
    this->AkSnowball2Haptics->SetupAttachment(RootComponent);
    this->SnowballHemisphereOuter_Lower->SetupAttachment(RootComponent);
    this->SnowballHemisphereInner_Lower->SetupAttachment(SnowballHemisphereOuter_Lower);
    this->SnowballHemisphereOuter_Upper->SetupAttachment(SnowballHemisphereOuter_Lower);
    this->SnowballHemisphereInner_Upper->SetupAttachment(SnowballHemisphereOuter_Upper);
    this->Snowball_Snowglobe_PS->SetupAttachment(RootComponent);
    this->SpotShadow->SetupAttachment(RootComponent);
    this->P_PP_Juggernaut->SetupAttachment(RootComponent);
    this->GameplayTag1->SetupAttachment(RootComponent);
    this->InteractionCollision->SetupAttachment(RootComponent);
}

void ASnowball2::SetLinearVelocity_Implementation(const FVector_NetQuantize100 linVelocity) {
}

void ASnowball2::SetAngularVelocity_Implementation(const FVector_NetQuantize100 angVelocity) {
}

void ASnowball2::PlayBumHaptics_Implementation(UAkAudioEvent* InAkEvent, UAkAudioEvent* InGamepadEvent) {
}

void ASnowball2::OnXFaceButtonPressed(AGingerbreadPlayerController* PlayerController) {
}

void ASnowball2::OnSquareFaceButtonPressed() {
}

void ASnowball2::OnSackboyDestroyed(AActor* DestroyedActor) {
}

void ASnowball2::OnRep_ReplicatedSackboy() {
}

void ASnowball2::OnLeftYAxisAction(AGingerbreadPlayerController* PlayerController, const float AxisValue) {
}

void ASnowball2::OnLeftXAxisAction(AGingerbreadPlayerController* PlayerController, const float AxisValue) {
}

void ASnowball2::OnHitPointsPostModification(const FHitPointModifyResult& Result) {
}

void ASnowball2::OnHitPointsModifierMasterPreModification(const FHitPointModifyAttempt& Attempt) {
}

void ASnowball2::OnHitPointsModifierMasterPostModification(const FHitPointModifyResult& Result) {
}

void ASnowball2::OnExitSnowballBackwardsAction(AGingerbreadPlayerController* PlayerController) {
}

void ASnowball2::OnExitSnowballAction(AGingerbreadPlayerController* PlayerController) {
}

void ASnowball2::OnCylinderInteractionBeginOverlap(UInteractionComponent* localComp, AActor* OtherActor, UInteractionComponent* OtherComponent) {
}

void ASnowball2::OnCylinderBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASnowball2::OnCircleFaceButtonPressed(AGingerbreadPlayerController* PlayerController) {
}

void ASnowball2::OnBeginOverlapFirstSackboy(UOverlapManagerComponent* pOverlapManagerComponent, UPrimitiveComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASnowball2::OnBeginOverlapAnyActor(UOverlapManagerComponent* pOverlapManagerComponent, UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASnowball2::OnBeginInteractionFirstSackboy(UOverlapManagerComponent* pOverlapManagerComponent, UInteractionComponent* localComponent, ASackboy* pOtherSackboy, UInteractionComponent* pOtherComp) {
}

void ASnowball2::OnBeginInteractionAnyActor(UOverlapManagerComponent* pOverlapManagerComponent, UInteractionComponent* localComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp) {
}

void ASnowball2::Landing_Implementation(const float Intensity) {
}

void ASnowball2::DestroySnowball_Implementation() {
}

void ASnowball2::CircleBoost_Implementation() {
}

void ASnowball2::BoostTimelineRotationRateUpdate(const float Alpha) {
}

void ASnowball2::BoostTimelineRotationRateFinished() {
}

void ASnowball2::BoostTimelineDamageSwitchEvent() {
}

void ASnowball2::BoostTimelineBoostEvent_Implementation() {
}

void ASnowball2::AddImpulse_Implementation(const FVector_NetQuantize100 Impulse, const bool velChange) {
}

void ASnowball2::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASnowball2, ServerPosition);
    DOREPLIFETIME(ASnowball2, AUTH_Sackboy);
    DOREPLIFETIME(ASnowball2, CanJump);
    DOREPLIFETIME(ASnowball2, CanBoost);
}


