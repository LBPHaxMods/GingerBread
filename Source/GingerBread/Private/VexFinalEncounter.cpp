#include "VexFinalEncounter.h"
#include "AkComponent.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "Components/SplineComponent.h"
#include "Components/StaticMeshComponent.h"
#include "CSPHelperComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "SplineFollowerComponent.h"
#include "ThrowTargetComponent.h"

AVexFinalEncounter::AVexFinalEncounter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->AppearSpline = CreateDefaultSubobject<USplineComponent>(TEXT("AppearSpline"));
    this->HitPoints = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPoints"));
    this->AkVex = CreateDefaultSubobject<UAkComponent>(TEXT("AkVex"));
    this->MeshReferenceComponent = CreateDefaultSubobject<USceneComponent>(TEXT("MeshReferenceComponent"));
    this->HeadPrimitive = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HeadPrimitive"));
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->CapsuleCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleCollision"));
    this->CapsuleInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("CapsuleInteraction"));
    this->ThrowTarget = CreateDefaultSubobject<UThrowTargetComponent>(TEXT("ThrowTarget"));
    this->StunVFXComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("StunVFXComponent"));
    this->RightShoulder = CreateDefaultSubobject<USceneComponent>(TEXT("RightShoulder"));
    this->LeftShoulder = CreateDefaultSubobject<USceneComponent>(TEXT("LeftShoulder"));
    this->ProximitySphere = CreateDefaultSubobject<USphereComponent>(TEXT("ProximitySphere"));
    this->SplineFollower = CreateDefaultSubobject<USplineFollowerComponent>(TEXT("SplineFollower"));
    this->RevealVanishCSPHelper = CreateDefaultSubobject<UCSPHelperComponent>(TEXT("RevealVanishCSPHelper"));
    this->Fight2DistanceCSPHelper = CreateDefaultSubobject<UCSPHelperComponent>(TEXT("Fight2DistanceCSPHelper"));
    this->AttackLoopComponent = NULL;
    this->MeshActor = NULL;
    this->FistManager = NULL;
    this->ItemAttackManager = NULL;
    this->TricksterAttack = NULL;
    this->DuopedeController = NULL;
    this->DartAttackController = NULL;
    this->FloorHatchController = NULL;
    this->TileManager = NULL;
    this->FightType = EVexFinalFightType::Fight1;
    this->BossHealthPerNumberOfPlayers.AddDefaulted(4);
    this->HealthPercentageStageThresholds.AddDefaulted(3);
    this->VanishRevealCurve = NULL;
    this->RevealDuration = 1.00f;
    this->RevealPartWayEffectsTime = 0.50f;
    this->VanishDuration = 1.80f;
    this->Fight2MinArenaOffset = 0.00f;
    this->Fight2MaxArenaOffset = -30.00f;
    this->Fight2MovingCloseDuration = 1.00f;
    this->Fight2MovingAwayDuration = 1.00f;
    this->Fight2DistanceCurve = NULL;
    this->AttackLoopClass = NULL;
    this->StunnedDuration = 15.00f;
    this->PreTricksterAttackVOTime = 1.00f;
    this->FloorBreakTotalAttackTime = 6.67f;
    this->FloorBreakDestructionTime = 2.75f;
    this->FloorBreakVOTime = 3.35f;
    this->PostFloorBreakShuffleDelay = 1.00f;
    this->WallBreakTotalAttackTime = 5.31f;
    this->WallBreakDestructionTime = 0.81f;
    this->WallBreakVOTime = 1.60f;
    this->TimeDilationScalar = 0.33f;
    this->TimeDilationDuration = 0.60f;
    this->MaxConsecutiveHits = 1;
    this->MaxConsecutiveHitsStunned = 5;
    this->IsDoingOutOfStunSplatAttack = false;
    this->AttackSystem = NULL;
    this->FightActiveState = EVexFinalFightActiveState::FightNotStarted;
    this->HealthBarActive = false;
    this->HealthBarRatio = 1.00f;
    this->CurrentLocation = -1;
    this->IsStunned = false;
    this->PlayingStunEffect = false;
    this->CapsuleCollisionEnabled = false;
    this->AppearSpline->SetupAttachment(RootComponent);
    this->HitPoints->SetupAttachment(RootComponent);
    this->AkVex->SetupAttachment(HeadPrimitive);
    this->MeshReferenceComponent->SetupAttachment(RootComponent);
    this->HeadPrimitive->SetupAttachment(RootComponent);
    this->GameplayTag->SetupAttachment(HeadPrimitive);
    this->CapsuleCollision->SetupAttachment(HeadPrimitive);
    this->CapsuleInteraction->SetupAttachment(CapsuleCollision);
    this->ThrowTarget->SetupAttachment(CapsuleCollision);
    this->StunVFXComponent->SetupAttachment(CapsuleCollision);
    this->RightShoulder->SetupAttachment(HeadPrimitive);
    this->LeftShoulder->SetupAttachment(HeadPrimitive);
    this->ProximitySphere->SetupAttachment(HeadPrimitive);
}


EVexFinalVoiceLineTriggerResult AVexFinalEncounter::TriggerVoiceLine(EVexFinalVoiceLineTriggerType TriggerType, bool Force100PercentChance) {
    return EVexFinalVoiceLineTriggerResult::Success;
}

void AVexFinalEncounter::TriggerVexVanishStartedEffects_Implementation() {
}

void AVexFinalEncounter::TriggerVexTransformedActorKilledEffects_Implementation(const FVector& DeathLocation) {
}

void AVexFinalEncounter::TriggerVexRevealStartedEffects_Implementation(bool EmphasisReveal) {
}

void AVexFinalEncounter::TriggerVexRevealPartWayEffects_Implementation() {
}

void AVexFinalEncounter::TriggerVexFightStartedEffects_Implementation() {
}

void AVexFinalEncounter::TriggerVexDefeatedEffects_Implementation() {
}

void AVexFinalEncounter::TriggerVexDamageEffects_Implementation(const FVector& DamageLocation) {
}

void AVexFinalEncounter::TriggerStunEffects_Implementation() {
}

void AVexFinalEncounter::TriggerStopStunEffects_Implementation() {
}

void AVexFinalEncounter::TriggerHatchOpenEffects_Implementation(AMoverTool2* HatchMoverTool) {
}

void AVexFinalEncounter::TriggerHatchCloseEffects_Implementation(AMoverTool2* HatchMoverTool) {
}

void AVexFinalEncounter::TriggerFight2FlyEffects_Implementation() {
}

void AVexFinalEncounter::TriggerFight2BreakTileEffects_Implementation() {
}

void AVexFinalEncounter::TriggerFight2BreakSideWallStartedEffects_Implementation() {
}

void AVexFinalEncounter::TriggerFight2BreakSideWallEffects_Implementation() {
}

void AVexFinalEncounter::TriggerFight2BreakBackWallEffects_Implementation() {
}


void AVexFinalEncounter::StartFight() {
}




void AVexFinalEncounter::PreStartFight() {
}

void AVexFinalEncounter::PreStart_Fight1VexReveal() {
}
















void AVexFinalEncounter::OnVoiceLineEnded(EVexFinalVoiceLineTriggerType TriggerType, bool WasInterrupted, bool FullBodyAnim) {
}

void AVexFinalEncounter::OnSackboySpawned(ASackboy* Sackboy, TEnumAsByte<ESackboySpawnType> SpawnType, USpawnPointComponent* SpawnPoint) {
}

void AVexFinalEncounter::OnSackboyDied(ASackboy* Sackboy) {
}

void AVexFinalEncounter::OnRep_Stunned() {
}

void AVexFinalEncounter::OnRep_PlayingStunEffect() {
}

void AVexFinalEncounter::OnRep_HealthBarRatio() {
}

void AVexFinalEncounter::OnRep_HealthBarActive() {
}

void AVexFinalEncounter::OnRep_FightActiveState() {
}

void AVexFinalEncounter::OnRep_CurrentLocation() {
}

void AVexFinalEncounter::OnRep_CapsuleCollisionEnabled() {
}

void AVexFinalEncounter::OnPlayerJoinLeaveEvent(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& PlayerId, bool IsForcedPlayer) {
}

void AVexFinalEncounter::OnOutOfLives() {
}

void AVexFinalEncounter::OnEndOverlapProximitySphere(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AVexFinalEncounter::OnBeginOverlapProximitySphere(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

AMoverTool2* AVexFinalEncounter::GetCurrentHatchMoverTool() const {
    return NULL;
}

void AVexFinalEncounter::Fight2_OnWallsDestroyed() {
}

void AVexFinalEncounter::Fight2_OnWallBreakStarted() {
}

void AVexFinalEncounter::Fight2_OnTilesDestroyed() {
}

void AVexFinalEncounter::Fight2_OnFly() {
}

void AVexFinalEncounter::Fight2_OnBackWallDestroyed() {
}

void AVexFinalEncounter::EnterStun_TurretKilled(ACreatinatorTurretBase* Turret) {
}

void AVexFinalEncounter::EnterStun_DuopedeKilled(AVexableDuopedeSegment* DuopedeSegment) {
}

void AVexFinalEncounter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVexFinalEncounter, IsDoingOutOfStunSplatAttack);
    DOREPLIFETIME(AVexFinalEncounter, FightActiveState);
    DOREPLIFETIME(AVexFinalEncounter, HealthBarActive);
    DOREPLIFETIME(AVexFinalEncounter, HealthBarRatio);
    DOREPLIFETIME(AVexFinalEncounter, CurrentLocation);
    DOREPLIFETIME(AVexFinalEncounter, IsStunned);
    DOREPLIFETIME(AVexFinalEncounter, PlayingStunEffect);
    DOREPLIFETIME(AVexFinalEncounter, CapsuleCollisionEnabled);
    DOREPLIFETIME(AVexFinalEncounter, Server_RevealVanishState);
    DOREPLIFETIME(AVexFinalEncounter, Server_Fight2ArenaDistanceState);
}


