#include "ScrewBomb.h"
#include "AkComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CSPTimelineComponent -FallbackName=CSPTimelineComponent
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "CSPHelperComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "SpotShadowComponent.h"

AScrewBomb::AScrewBomb(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    this->SceneComponent = (USceneComponent*)RootComponent;
    this->SpotShadowComponent = CreateDefaultSubobject<USpotShadowComponent>(TEXT("SpotShadowComponent"));
    this->SphereComponent = NULL;
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->AkHapticsComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkHapticsComponent"));
    this->ScrewMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ScrewMesh"));
    this->ScrewInteract = CreateDefaultSubobject<UInteractionComponent>(TEXT("ScrewInteract"));
    this->SquashVolumeComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("SquashVolumeComponent"));
    this->SquashInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("SquashInteraction"));
    this->SquashHitPointsModifierComponent = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("SquashHitPointsModifierComponent"));
    this->HangingTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("HangingTimeline"));
    this->FastenScrewTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("FastenScrewTimeline"));
    this->CountdownTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("CountdownTimeline"));
    this->SlapUnscrewTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("SlapUnscrewTimeline"));
    this->CSPHelperComponent = CreateDefaultSubobject<UCSPHelperComponent>(TEXT("CSPHelperComponent"));
    this->NumberOfSlaps = 2;
    this->LevelType = ELevelType::Space;
    this->BlastRadius = 0.00f;
    this->CollectabellsToSpawn = 0;
    this->ScoreBubblesToSpawn = 3;
    this->ScrewDepth = -10.00f;
    this->HangTime = 0.00f;
    this->TargetRideOnVehicleOnly = true;
    this->RideOnVehicleClass = NULL;
    this->ExplosionClass = NULL;
    this->HangingShadowBlurTimelineCurve = NULL;
    this->HangingShadowOpacityTimelineCurve = NULL;
    this->HangingShadowScaleTimelineCurve = NULL;
    this->FastenScrewLocationTimelineCurve = NULL;
    this->FastenScrewRotationTimelineCurve = NULL;
    this->CountdownTimelineCurve = NULL;
    this->SlapRescrewTimelineCurve = NULL;
    this->DrillingParticleSystem = NULL;
    this->DrillingCameraShake = NULL;
    this->DrillingCameraShakeAttenuation = NULL;
    this->DrillingForceFeedbackEvent = NULL;
    this->DrillingForceFeedbackAttenuation = NULL;
    this->LightMaterialInterface = NULL;
    this->ExplosionParticleSystem = NULL;
    this->ExplosionCameraShake = NULL;
    this->ExplosionCameraShakeAttenuation = 0.00f;
    this->ExplosionForceFeedbackEvent = NULL;
    this->ExplosionForceFeedbackAttenuation = NULL;
    this->FallingAkEvent = NULL;
    this->FastenScrewAkEvent = NULL;
    this->PlayBombTickingAkEvent = NULL;
    this->StopBombTickingAkEvent = NULL;
    this->ExplosionAkEvent = NULL;
    this->SlapUnscrewAkEvent = NULL;
    this->PlayRescrewAkEvent = NULL;
    this->StopRescrewAkEvent = NULL;
    this->BoltPoppedAkEvent = NULL;
    this->PlayRescrewAkEventHaptics = NULL;
    this->StopRescrewAkEventHaptics = NULL;
    this->BoltPoppedAkEventHaptics = NULL;
    this->FallingAkEventHaptics = NULL;
    this->FastenScrewAkEventHaptics = NULL;
    this->PlayBombTickingAkEventHaptics = NULL;
    this->StopBombTickingAkEventHaptics = NULL;
    this->LightDynamicMaterialInstance = NULL;
    this->SpotShadowComponent->SetupAttachment(ScrewMesh);
    this->AkComponent->SetupAttachment(RootComponent);
    this->AkHapticsComponent->SetupAttachment(RootComponent);
    this->ScrewMesh->SetupAttachment(RootComponent);
    this->ScrewInteract->SetupAttachment(ScrewMesh);
    this->SquashVolumeComponent->SetupAttachment(RootComponent);
    this->SquashInteraction->SetupAttachment(SquashVolumeComponent);
}

void AScrewBomb::OnSlapUnscrewTimelineUpdate(const float Alpha) {
}

void AScrewBomb::OnSlapUnscrewTimelineFinished() {
}

void AScrewBomb::OnScrewMeshBeginOverlap(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AScrewBomb::OnScrewMeshBeginInteract(UInteractionComponent* pOverlappedComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp) {
}

void AScrewBomb::OnScrewBombSlappedRPC_Implementation(const float InInitialBoltHeight, const float InInitialBoltRotation, const int32 InAdjustedSlapPowerLevel, const int32 InSlapsReceivedCount) {
}

void AScrewBomb::OnRep_ReplicatedAttachment() {
}

void AScrewBomb::OnHangingTimelineFinished() {
}

void AScrewBomb::OnHangingShadowScaleUpdate(const float ShadowScale) {
}

void AScrewBomb::OnHangingShadowOpacityUpdate(const float ShadowOpacity) {
}

void AScrewBomb::OnHangingShadowBlurUpdate(const float ShadowBlur) {
}

void AScrewBomb::OnFastenScrewTimelineFinished() {
}

void AScrewBomb::OnFastenScrewRotationUpdate(const float RotationLerp) {
}

void AScrewBomb::OnFastenScrewLocationUpdate(const float LocationLerp) {
}

void AScrewBomb::OnCSPAction(uint32 Type) {
}

void AScrewBomb::OnCountdownTimelineUpdate(const float MaterialOutput) {
}

void AScrewBomb::OnCountdownTimelineFinished() {
}

void AScrewBomb::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AScrewBomb, NumberOfSlaps);
    DOREPLIFETIME(AScrewBomb, LevelType);
    DOREPLIFETIME(AScrewBomb, ReplicatedAttachment);
}


