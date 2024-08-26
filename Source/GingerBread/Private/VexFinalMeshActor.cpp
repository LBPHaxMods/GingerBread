#include "VexFinalMeshActor.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "VexFinalActionComponent.h"

AVexFinalMeshActor::AVexFinalMeshActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->MeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComponent"));
    this->VexFinalActionComponent = CreateDefaultSubobject<UVexFinalActionComponent>(TEXT("ActionComponent"));
    this->Vex = NULL;
    this->UseFistAttackAnim = false;
    this->UseSlapAttackAnim = false;
    this->UseOutOfStunSlapAttackAnim = false;
    this->UseTricksterAttackAnim = false;
    this->UseItemAttackAnim = false;
    this->UseBombSpamAttackAnim = false;
    this->FistAttackAnimTime = 3.06f;
    this->SlapAttackAnimTime = 0.00f;
    this->OutOfStunAttackAnimTime = 2.60f;
    this->TricksterAttackAnimTime = 0.00f;
    this->ItemAttackAnimTime = 0.00f;
    this->BombSpamAttackAnimTime = 0.00f;
    this->HitReactionNormalTime = 1.66f;
    this->HitReactionStunnedTime = 0.76f;
    this->HitReactionBombTime = 1.66f;
    this->FloorBreakAnimTime = 6.67f;
    this->WallBreakAnimTime = 5.31f;
    this->IsMeshActorActive = false;
    this->IsHidden = false;
    this->ActiveVoiceLine = EVexFinalVoiceLineType::Invalid;
    this->MeshComponent->SetupAttachment(RootComponent);
}

void AVexFinalMeshActor::PlayAdditiveAnimation_Implementation(float Timestamp) {
}

void AVexFinalMeshActor::OnWallBreak() {
}

void AVexFinalMeshActor::OnVoiceLinePlayed(EVexFinalVoiceLineType VoiceLineType, bool FullBodyAnim) {
}

void AVexFinalMeshActor::OnVoiceLineEnded(EVexFinalVoiceLineTriggerType TriggerType, bool WasInterrupted, bool FullBodyAnim) {
}

void AVexFinalMeshActor::OnVexVanishStarted() {
}

void AVexFinalMeshActor::OnVexVanishFinished() {
}

void AVexFinalMeshActor::OnVexStunUpdated(bool InIsStunned) {
}

void AVexFinalMeshActor::OnVexRevealStarted() {
}

void AVexFinalMeshActor::OnVexRevealFinished() {
}

void AVexFinalMeshActor::OnVexHitByBomb() {
}

void AVexFinalMeshActor::OnVexFightStarted() {
}

void AVexFinalMeshActor::OnVexDefeatedFinished() {
}

void AVexFinalMeshActor::OnVexDefeated() {
}

void AVexFinalMeshActor::OnVexDamaged() {
}

void AVexFinalMeshActor::OnTricksterAttack() {
}

void AVexFinalMeshActor::OnSlapAttack(bool OutOfStun) {
}

void AVexFinalMeshActor::OnRep_IsHidden() {
}

void AVexFinalMeshActor::OnRep_ActiveVoiceLine() {
}

void AVexFinalMeshActor::OnItemAttack() {
}

void AVexFinalMeshActor::OnFloorBreak() {
}

void AVexFinalMeshActor::OnFistAttack() {
}

void AVexFinalMeshActor::OnBombSpamAttack() {
}

void AVexFinalMeshActor::ClearAdditiveAnimation_Implementation(float Timestamp) {
}

void AVexFinalMeshActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVexFinalMeshActor, IsMeshActorActive);
    DOREPLIFETIME(AVexFinalMeshActor, IsHidden);
    DOREPLIFETIME(AVexFinalMeshActor, ActiveVoiceLine);
}


