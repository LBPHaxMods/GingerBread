#include "Naomi.h"
#include "Components/CapsuleComponent.h"
#include "Components/ChildActorComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "CSPHelperComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsComponent.h"
#include "NaomiActionComponent.h"
#include "Net/UnrealNetwork.h"

ANaomi::ANaomi(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->LeftHand = CreateDefaultSubobject<UChildActorComponent>(TEXT("LeftHand"));
    this->RightHand = CreateDefaultSubobject<UChildActorComponent>(TEXT("RightHand"));
    this->NaomiBodySK = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("NaomiBodySK"));
    this->CentreScreenCorruption = CreateDefaultSubobject<UChildActorComponent>(TEXT("CentreScreenCorruption"));
    this->LeftScreenCorruption = CreateDefaultSubobject<UChildActorComponent>(TEXT("LeftScreenCorruption"));
    this->RightScreenCorruption = CreateDefaultSubobject<UChildActorComponent>(TEXT("RightScreenCorruption"));
    this->NaomiBodyCollider = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("NaomiBodyCollider"));
    this->NaomiBodyGameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("NaomiBodyGameplayTag"));
    this->LaserLeftSK = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("LaserLeftSK"));
    this->LaserLeftCollider = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LaserLeftCollider"));
    this->LaserLeftLowerArmCollider = CreateDefaultSubobject<UCapsuleComponent>(TEXT("LaserLeftLowerArmCollider"));
    this->LaserLeftUpperArmCollider = CreateDefaultSubobject<UCapsuleComponent>(TEXT("LaserLeftUpperArmCollider"));
    this->LaserLeftGameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("LaserLeftGameplayTag"));
    this->LaserRightSK = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("LaserRightSK"));
    this->LaserRightCollider = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LaserRightCollider"));
    this->LaserRightLowerArmCollider = CreateDefaultSubobject<UCapsuleComponent>(TEXT("LaserRightLowerArmCollider"));
    this->LaserRightUpperArmCollider = CreateDefaultSubobject<UCapsuleComponent>(TEXT("LaserRightUpperArmCollider"));
    this->LaserRightGameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("LaserRightGameplayTag"));
    this->ScreenLeftSM = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ScreenLeftSM"));
    this->ScreenLeftGameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("ScreenLeftGameplayTag"));
    this->ScreenRightSM = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ScreenRightSM"));
    this->ScreenRightGameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("ScreenRightGameplayTag"));
    this->HitPoints = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPoints"));
    this->CSPHelperComponent = CreateDefaultSubobject<UCSPHelperComponent>(TEXT("CSPHelperComponent"));
    this->FistLeftDangerModifier = NULL;
    this->FistLeftChargeDangerModifier = NULL;
    this->FistRightDangerModifier = NULL;
    this->FistRightChargeDangerModifier = NULL;
    this->ActionComponent = CreateDefaultSubobject<UNaomiActionComponent>(TEXT("ActionComponent"));
    this->SpotlightActor = NULL;
    this->TouchScreen = NULL;
    this->BigDataBank = NULL;
    this->ShockwaveArenaBounds = NULL;
    this->LaserModuleLeft = NULL;
    this->LaserModuleRight = NULL;
    this->CameraShake = NULL;
    this->EasyPages.AddDefaulted(3);
    this->HardPages.AddDefaulted(3);
    this->EasyPagesPlayerLimit = 2;
    this->BossMaxHealth = 300;
    this->HealthToLosePerPhase.AddDefaulted(4);
    this->ScreenHitSFX = NULL;
    this->DelayBetweenPhaseChanges = 6.00f;
    this->IntroductionCameraShakeDelay = 1.00f;
    this->DelayBeforeStartingEnraged = 1.00f;
    this->PhaseChangeCameraShake = NULL;
    this->PhaseChangeShakeRadiusIntroduction = 4000.00f;
    this->PhaseChangeShakeRadiusNonIntroduction = 800.00f;
    this->BattlePhaseStartDelay = 1.00f;
    this->RestTimeBetweenStatesPerPhase.AddDefaulted(4);
    this->LaserSwipeDurationPerPhase.AddDefaulted(4);
    this->LaserRotationCurve = NULL;
    this->LaserStartRotation = 90.00f;
    this->LaserUnfoldAnimDelay = 1.33f;
    this->LaserActivateDelay = 0.20f;
    this->LaserShootDuration = 2.50f;
    this->LaserFoldAnimDelay = 1.00f;
    this->LaserShootSFX = NULL;
    this->LaserStopSFX = NULL;
    this->LaserUnfoldSFX = NULL;
    this->LaserFoldSFX = NULL;
    this->EnragedPunchPostFinishedDelay = 1.00f;
    this->NormalPunchSlowAnimTriggerDelay = 0.30f;
    this->NormalPunchFastAnimTriggerDelay = 0.13f;
    this->NormalPunchSlowAnimDuration = 1.67f;
    this->NormalPunchFastAnimDuration = 0.67f;
    this->ChargedPunchLeftPreImpactAnimDuration = 0.13f;
    this->ChargedPunchLeftPostImpactAnimDuration = 1.70f;
    this->ChargedPunchRightPreImpactAnimDuration = 0.33f;
    this->ChargedPunchRightPostImpactAnimDuration = 1.67f;
    this->ShortCircuitBeginAdminDelay = 2.50f;
    this->ShortCircuitSFX = NULL;
    this->AdminModeFileSetupDelay = 1.70f;
    this->AdminModePreNextPhaseDelay = 1.00f;
    this->AdminModeReturnAnimDelay = 0.50f;
    this->AdminModeFloorNaomiSpawnSFXDelay = 0.30f;
    this->AdminModePullBodyUpSFX = NULL;
    this->AdminModeFloorNaomiSpawnSFX = NULL;
    this->AdminModeReturnSFX = NULL;
    this->AdminModeReturnHaptics = NULL;
    this->LaserShootHaptics = NULL;
    this->LaserStopHaptics = NULL;
    this->FaceHitDuration = 2.50f;
    this->FaceHitSFX = NULL;
    this->DefeatedVFX = NULL;
    this->DefeatedVFXSocket = TEXT("eye_jntSocket");
    this->DefeatedSFX = NULL;
    this->DefeatedHaptics = NULL;
    this->IsFightStarted = false;
    this->Rep_IsHealthBarSetup = false;
    this->Rep_IsHealthBarInvulnerable = true;
    this->Rep_IsNaomiVisible = false;
    this->BossCurrentHealth = 300;
    this->Rep_TouchScreenPage = -1;
    this->CurrentPhase = -1;
    this->Rep_HasStartedFinalPhase = false;
    this->Rep_IsCentreVirusShown = false;
    this->Rep_IsCentreEyeClosed = false;
    this->Rep_IsInAdminMode = false;
    this->ScreenRightGameplayTag->SetupAttachment(ScreenRightSM);
    this->HitPoints->SetupAttachment(RootComponent);
    this->LeftHand->SetupAttachment(RootComponent);
    this->RightHand->SetupAttachment(RootComponent);
    this->NaomiBodySK->SetupAttachment(RootComponent);
    this->CentreScreenCorruption->SetupAttachment(NaomiBodySK);
    this->LeftScreenCorruption->SetupAttachment(NaomiBodySK);
    this->RightScreenCorruption->SetupAttachment(NaomiBodySK);
    this->NaomiBodyCollider->SetupAttachment(NaomiBodySK);
    this->NaomiBodyGameplayTag->SetupAttachment(NaomiBodyCollider);
    this->LaserLeftSK->SetupAttachment(RootComponent);
    this->LaserLeftCollider->SetupAttachment(LaserLeftSK);
    this->LaserLeftLowerArmCollider->SetupAttachment(LaserLeftSK);
    this->LaserLeftUpperArmCollider->SetupAttachment(LaserLeftSK);
    this->LaserLeftGameplayTag->SetupAttachment(LaserLeftSK);
    this->LaserRightSK->SetupAttachment(RootComponent);
    this->LaserRightCollider->SetupAttachment(LaserRightSK);
    this->LaserRightLowerArmCollider->SetupAttachment(LaserRightSK);
    this->LaserRightUpperArmCollider->SetupAttachment(LaserRightSK);
    this->LaserRightGameplayTag->SetupAttachment(LaserRightSK);
    this->ScreenLeftSM->SetupAttachment(NaomiBodySK);
    this->ScreenLeftGameplayTag->SetupAttachment(ScreenLeftSM);
    this->ScreenRightSM->SetupAttachment(NaomiBodySK);
}


void ANaomi::TriggerSpeech_Implementation(const FText& Speech, int32 Priority, bool HideSubtitle) {
}



void ANaomi::OnTouchScreenSolved(int32 NewPage) {
}

void ANaomi::OnSubtitleManagerAvailable(AActor* Manager) {
}

void ANaomi::OnSackboyDied(ASackboy* Sackboy) {
}

void ANaomi::OnRep_TouchScreenPage() {
}

void ANaomi::OnRep_ServerScreenHiddenData() {
}

void ANaomi::OnRep_ServerMusicData() {
}

void ANaomi::OnRep_IsNaomiVisible() {
}

void ANaomi::OnRep_IsInAdminMode() {
}

void ANaomi::OnRep_IsHealthBarSetup() {
}

void ANaomi::OnRep_IsHealthBarInvulnerable() {
}

void ANaomi::OnRep_IsFightStarted() {
}

void ANaomi::OnRep_IsCentreVirusShown() {
}

void ANaomi::OnRep_HasStartedFinalPhase() {
}

void ANaomi::OnRep_BossCurrentHealth() {
}

void ANaomi::OnPlayerJoinLeaveEvent(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& PlayerId, bool IsForcedPlayer) {
}

void ANaomi::OnOutOfLives() {
}

void ANaomi::OnFaceCorruptionDestroyed(ANaomiSplineCorruption* DestroyedCorruption) {
}

void ANaomi::Multicast_TriggerCameraShake_Implementation() {
}

void ANaomi::Multicast_SpawnEmitterAtLocation_Implementation(UParticleSystem* ParticleSystem, const FVector& Location) {
}

void ANaomi::Multicast_PostAudioEventAtLocation_Implementation(UAkAudioEvent* AkEvent, const FVector& Location) {
}

void ANaomi::Multicast_PostAudioEvent_Implementation(UAkAudioEvent* AkEvent) {
}

void ANaomi::Multicast_PlayHapticsAtLocation_Implementation(UAkAudioEvent* HapticsEvent, UForceFeedbackEffect* ForceFeedbackEffect, const FVector& Location) {
}

void ANaomi::Multicast_EndSpeech_Implementation() {
}

void ANaomi::Multicast_BroadcastDefeated_Implementation() {
}

bool ANaomi::IsInAdminPhase() const {
    return false;
}

void ANaomi::IntroCutsceneEnded() {
}

void ANaomi::IntroCutsceneBegun() {
}

int32 ANaomi::GetCurrentPhase() const {
    return 0;
}

void ANaomi::EndSpeech(const FString& Key) {
}

void ANaomi::CutsceneDestroySkullWaves() {
}

void ANaomi::Auth_SetNaomiVisibility(bool visible) {
}

void ANaomi::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ANaomi, IsFightStarted);
    DOREPLIFETIME(ANaomi, Rep_IsHealthBarSetup);
    DOREPLIFETIME(ANaomi, Rep_IsHealthBarInvulnerable);
    DOREPLIFETIME(ANaomi, Rep_IsNaomiVisible);
    DOREPLIFETIME(ANaomi, BossCurrentHealth);
    DOREPLIFETIME(ANaomi, Rep_TouchScreenPage);
    DOREPLIFETIME(ANaomi, CurrentPhase);
    DOREPLIFETIME(ANaomi, LaserServerData);
    DOREPLIFETIME(ANaomi, Rep_HasStartedFinalPhase);
    DOREPLIFETIME(ANaomi, Rep_IsCentreVirusShown);
    DOREPLIFETIME(ANaomi, Rep_IsCentreEyeClosed);
    DOREPLIFETIME(ANaomi, ServerScreenHiddenData);
    DOREPLIFETIME(ANaomi, ServerMusicData);
    DOREPLIFETIME(ANaomi, Rep_IsInAdminMode);
}


