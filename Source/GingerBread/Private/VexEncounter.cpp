#include "VexEncounter.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "CSPHelperComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "ThrowTargetComponent.h"
#include "VexActionComponent.h"

AVexEncounter::AVexEncounter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->FullOverlapCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("FullOverlapCollider"));
    this->FullInteractCollider = CreateDefaultSubobject<UInteractionComponent>(TEXT("FullInteractCollider"));
    this->Visuals = CreateDefaultSubobject<USceneComponent>(TEXT("Visuals"));
    this->Vex_worldboss = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Vex_worldboss"));
    this->RightThrowPoint = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RightThrowPoint"));
    this->LeftThrowPoint = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LeftThrowPoint"));
    this->LeftBellFireFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("LeftBellFireFX"));
    this->RightBellFireFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("RightBellFireFX"));
    this->PushPulseLeftHandFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("PushPulseLeftHandFX"));
    this->PushPulseRightHandFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("PushPulseRightHandFX"));
    this->BackOverlapCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("BackOverlapCollider"));
    this->HeadOverlapCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("HeadOverlapCollider"));
    this->UpperOverlapCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("UpperOverlapCollider"));
    this->BackInteractCollider = CreateDefaultSubobject<UInteractionComponent>(TEXT("BackInteractCollider"));
    this->HeadInteractCollider = CreateDefaultSubobject<UInteractionComponent>(TEXT("HeadInteractCollider"));
    this->UpperInteractCollider = CreateDefaultSubobject<UInteractionComponent>(TEXT("UpperInteractCollider"));
    this->ThrowTarget = CreateDefaultSubobject<UThrowTargetComponent>(TEXT("ThrowTarget"));
    this->VexActionComponent = CreateDefaultSubobject<UVexActionComponent>(TEXT("VexActionComponent"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->CSPHelperComponent = CreateDefaultSubobject<UCSPHelperComponent>(TEXT("CSPHelperComponent"));
    this->EncounterVersion = EVexEncounterVersion::Invalid;
    this->MovementController = NULL;
    this->ConveyorController = NULL;
    this->BeginOnBeginPlay = true;
    this->BossMaxHealth = 295;
    this->BossCurrentHealth = 295;
    this->BombDamage = 30;
    this->VexRageStartSFX = NULL;
    this->VexSpinBackwardsSFX = NULL;
    this->VexSpinForwardsSFX = NULL;
    this->VexArmMoveSFX = NULL;
    this->VexThrowBombsSFX = NULL;
    this->VexConjureBombsSFX = NULL;
    this->VexConjureRollerSFX = NULL;
    this->HitReactionCollection = NULL;
    this->InitialIdleTime = 0.00f;
    this->UseSpikeyRollers = true;
    this->JumpDuration = 6.00f;
    this->ThrowBombProjectileClass = NULL;
    this->ThrowRightHandProjectileClass = NULL;
    this->ThrowLeftHandProjectileClass = NULL;
    this->ThrowSpikeyRollerProjectileClass = NULL;
    this->VortexClass = NULL;
    this->StuntBombClass = NULL;
    this->Rep_PhaseTransitionTriggered = false;
    this->IsFightStarted = false;
    this->CurrentPhase = EVexEncounterPhase::Invalid;
    this->HitReactionCameraShake = NULL;
    this->HealthBarEnabled = false;
    this->IsRaging = false;
    this->FireBellsActive = false;
    this->PulseHandsActive = false;
    this->MusicState = EVexEncounterMusicState::Invalid;
    this->Behaviour_IdleMoving = NULL;
    this->Behaviour_Vortex = NULL;
    this->Behaviour_Rage = NULL;
    this->Behaviour_ConveyorHeights = NULL;
    this->Behaviour_PhaseTransition = NULL;
    this->Behaviour_Jump = NULL;
    this->Behaviour_ThrowBomb = NULL;
    this->Behaviour_ConjureHand = NULL;
    this->Behaviour_SpikeyRoller = NULL;
    this->Behaviour_FlameSequence = NULL;
    this->Behaviour_SpikeyRollerSequence = NULL;
    this->RightBellFireFX->SetupAttachment(Vex_worldboss);
    this->PushPulseLeftHandFX->SetupAttachment(RootComponent);
    this->PushPulseRightHandFX->SetupAttachment(RootComponent);
    this->BackOverlapCollider->SetupAttachment(RootComponent);
    this->HeadOverlapCollider->SetupAttachment(RootComponent);
    this->UpperOverlapCollider->SetupAttachment(RootComponent);
    this->BackInteractCollider->SetupAttachment(BackOverlapCollider);
    this->HeadInteractCollider->SetupAttachment(HeadOverlapCollider);
    this->UpperInteractCollider->SetupAttachment(UpperOverlapCollider);
    this->ThrowTarget->SetupAttachment(RootComponent);
    this->AkComponent->SetupAttachment(RootComponent);
    this->FullOverlapCollider->SetupAttachment(RootComponent);
    this->FullInteractCollider->SetupAttachment(FullOverlapCollider);
    this->Visuals->SetupAttachment(RootComponent);
    this->Vex_worldboss->SetupAttachment(Visuals);
    this->RightThrowPoint->SetupAttachment(Vex_worldboss);
    this->LeftThrowPoint->SetupAttachment(Vex_worldboss);
    this->LeftBellFireFX->SetupAttachment(Vex_worldboss);
}




void AVexEncounter::TriggerIntro_Implementation() {
}

void AVexEncounter::TakeDamageHit(const FVector& HitLocation) {
}


void AVexEncounter::RegisterSpawnedActor(AActor* SpawnedActor) {
}

void AVexEncounter::PlayProjectilveVFX_Implementation(UParticleSystem* VFX, UStaticMeshComponent* AttachMesh) {
}

void AVexEncounter::PlayDeathVFX_Implementation(FVector SpawnLocation) {
}

void AVexEncounter::PlayDamageEffects_Implementation(FVector HitLocation, float NewHealth, bool IsIdleMoving) {
}

void AVexEncounter::PlayAudio_Implementation(UAkAudioEvent* AudioEvent) {
}

void AVexEncounter::OnTimeDilationStarted() {
}

void AVexEncounter::OnSackboySpawned(ASackboy* Sackboy, TEnumAsByte<ESackboySpawnType> SpawnType, USpawnPointComponent* SpawnPoint) {
}

void AVexEncounter::OnSackboyDied(ASackboy* Sackboy) {
}

void AVexEncounter::OnRep_ThrowTargetInfo() {
}

void AVexEncounter::OnRep_PulseHandsActive() {
}

void AVexEncounter::OnRep_MusicState() {
}

void AVexEncounter::OnRep_IsRaging() {
}

void AVexEncounter::OnRep_IsFightStarted() {
}

void AVexEncounter::OnRep_HealthBarEnabled() {
}

void AVexEncounter::OnRep_FireBellsActive() {
}

void AVexEncounter::OnRep_CurrentPhase() {
}

void AVexEncounter::OnRep_BossCurrentHealth() {
}

void AVexEncounter::OnPlayerJoinLeaveEvent(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& PlayerId, bool IsForcedPlayer) {
}

void AVexEncounter::OnOutOfLives() {
}

void AVexEncounter::OnFullColliderEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AVexEncounter::OnFullColliderEndInteract(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void AVexEncounter::OnColliderOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AVexEncounter::OnColliderInteract(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void AVexEncounter::IntroFinished_Delayed0() {
}

void AVexEncounter::IntroFinished() {
}

int32 AVexEncounter::GetCurrentPhaseIndex() const {
    return 0;
}

void AVexEncounter::ConveyorSpeedUpdated(float NewSpeed) {
}

void AVexEncounter::ChangeBehaviour_Implementation(EVexEncounterBehaviour NewState) {
}

void AVexEncounter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVexEncounter, BossCurrentHealth);
    DOREPLIFETIME(AVexEncounter, Rep_PhaseTransitionTriggered);
    DOREPLIFETIME(AVexEncounter, IsFightStarted);
    DOREPLIFETIME(AVexEncounter, CurrentPhase);
    DOREPLIFETIME(AVexEncounter, HealthBarEnabled);
    DOREPLIFETIME(AVexEncounter, ThrowTargetInfo);
    DOREPLIFETIME(AVexEncounter, IsRaging);
    DOREPLIFETIME(AVexEncounter, FireBellsActive);
    DOREPLIFETIME(AVexEncounter, PulseHandsActive);
    DOREPLIFETIME(AVexEncounter, MusicState);
}


