#include "RhythmicFlameJet.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Components/TimelineComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "TriggerActorComponent.h"

ARhythmicFlameJet::ARhythmicFlameJet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

    this->GrillInstancedStaticMesh = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("GrillInstancedStaticMesh"));
    this->FlamesInstancedStaticMesh = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("FlamesInstancedStaticMesh"));
    this->DamageVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("DamageVolume"));
    this->DamageInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("DamageInteraction"));
    this->MovementInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("MovementInteraction"));
    this->MovementCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("MovementCollision"));
    this->AkFlameJet = CreateDefaultSubobject<UAkComponent>(TEXT("AkFlameJet"));
    this->AkHapticsFlameJet = CreateDefaultSubobject<UAkComponent>(TEXT("AkHapticsFlameJet"));
    this->HitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->WarmUpTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("WarmUpTimeline"));
    this->CoolDownTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("CoolDownTimeline"));
    this->FlamePanelParentMaterial = NULL;
    this->FlamePanelUniqueFlameMaterial = NULL;
    this->FlameJetBorderClass = NULL;
    this->WarmUpTimelineAlphaCurve = NULL;
    this->CoolDownTimelineAlphaCurve = NULL;
    this->FlameJetsOn = NULL;
    this->FlameJetsOff = NULL;
    this->FlameJetsWindUp = NULL;
    this->FlameJetsOnHapticsEvent = NULL;
    this->FlameJetsOffHapticsEvent = NULL;
    this->FlameJetsWindUpOnHapticsEvent = NULL;
    this->FlameJetsWindUpOffHapticsEvent = NULL;
    this->WindUpParticles = NULL;
    this->WindUpDissipationParticles = NULL;
    this->ResetParticlesOnFlameDissipation = true;
    this->ResetParticlesOnFlameDeactivation = true;
    this->MaxEmissiveValue = 30.00f;
    this->Rows = 2;
    this->Columns = 2;
    this->EnableBaseCollision = true;
    this->WarmupTime = 1.00f;
    this->CooldownTime = 0.25f;
    this->FlameVFX = NULL;
    this->EmbersVFX = NULL;
    this->OwnedHeatMat = NULL;
    this->OwnedFlameMat = NULL;
    this->ReplicatedState = ERhythmicFlameJetState::Sleeping;
    this->GrillInstancedStaticMesh->SetupAttachment(RootComponent);
    this->FlamesInstancedStaticMesh->SetupAttachment(RootComponent);
    this->DamageVolume->SetupAttachment(RootComponent);
    this->DamageInteraction->SetupAttachment(RootComponent);
    this->MovementInteraction->SetupAttachment(RootComponent);
    this->MovementCollision->SetupAttachment(RootComponent);
    this->AkFlameJet->SetupAttachment(RootComponent);
    this->AkHapticsFlameJet->SetupAttachment(RootComponent);
}

void ARhythmicFlameJet::WarmUpTimeline_Update(float Alpha) {
}

void ARhythmicFlameJet::WarmUpTimeline_Finished() {
}

void ARhythmicFlameJet::OnRep_ReplicatedState() {
}

void ARhythmicFlameJet::OnExitFlameJetInteract(UInteractionComponent* pOverlappedComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp) {
}

void ARhythmicFlameJet::OnExitFlameJet(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex) {
}

void ARhythmicFlameJet::OnEnterFlameJetInteract(UInteractionComponent* pOverlappedComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp) {
}

void ARhythmicFlameJet::OnEnterFlameJet(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ARhythmicFlameJet::CopyDirecteesFromActivator() {
}

void ARhythmicFlameJet::CoolDownTimeline_Update(float Alpha) {
}

void ARhythmicFlameJet::CoolDownTimeline_Finished() {
}

void ARhythmicFlameJet::AddBorder() {
}

void ARhythmicFlameJet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARhythmicFlameJet, ReplicatedState);
}


