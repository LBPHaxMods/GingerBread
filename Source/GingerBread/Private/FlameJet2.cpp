#include "FlameJet2.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CSPTimelineComponent -FallbackName=CSPTimelineComponent
#include "Components/InstancedStaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "TriggerActorComponent.h"

AFlameJet2::AFlameJet2(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

    this->GrillInstancedStaticMesh = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("GrillInstancedStaticMesh"));
    this->FlamesInstancedStaticMesh = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("FlamesInstancedStaticMesh"));
    this->DamageVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("DamageVolume"));
    this->DamageInteractVolume = CreateDefaultSubobject<UInteractionComponent>(TEXT("DamageInteractVolume"));
    this->MovementCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("MovementCollision"));
    this->MovementInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("MovementInteraction"));
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
    this->Mode = EFlameJet2Mode::LoopStates;
    this->ResetParticlesOnFlameDissipation = true;
    this->ResetParticlesOnFlameDeactivation = true;
    this->MaxEmissiveValue = 30.00f;
    this->Rows = 2;
    this->Columns = 2;
    this->EnableBaseCollision = true;
    this->AllowLevelObjectInterface = false;
    this->StartsEnabled = true;
    this->RequiresManualTrigger = false;
    this->AllowClientAuthority = false;
    this->StayOn = false;
    this->StayOff = false;
    this->StartDelay = 0.00f;
    this->WarmupTime = 1.50f;
    this->ActiveTime = 1.50f;
    this->CooldownTime = 0.50f;
    this->InactiveTime = 1.00f;
    this->FlameVFX = NULL;
    this->EmbersVFX = NULL;
    this->OwnedHeatMat = NULL;
    this->OwnedFlameMat = NULL;
    this->State = EFlameJet2State::Sleeping;
    this->GrillInstancedStaticMesh->SetupAttachment(RootComponent);
    this->FlamesInstancedStaticMesh->SetupAttachment(RootComponent);
    this->DamageVolume->SetupAttachment(RootComponent);
    this->DamageInteractVolume->SetupAttachment(RootComponent);
    this->MovementCollision->SetupAttachment(RootComponent);
    this->MovementInteraction->SetupAttachment(MovementCollision);
    this->AkFlameJet->SetupAttachment(RootComponent);
    this->AkHapticsFlameJet->SetupAttachment(RootComponent);
}

void AFlameJet2::WarmUpTimeline_Update(float Alpha) {
}

void AFlameJet2::WarmUpTimeline_Finished() {
}

void AFlameJet2::SetMode(EFlameJet2Mode NewMode) {
}

void AFlameJet2::OnRep_State() {
}

void AFlameJet2::OnFlameJetManagerAvailable(AActor* ManagerActor) {
}

void AFlameJet2::OnExitFlameJetInteract(UInteractionComponent* pOverlappedComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp) {
}

void AFlameJet2::OnExitFlameJet(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex) {
}

void AFlameJet2::OnEnterFlameJetInteract(UInteractionComponent* pOverlappedComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp) {
}

void AFlameJet2::OnEnterFlameJet(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AFlameJet2::CoolDownTimeline_Update(float Alpha) {
}

void AFlameJet2::CoolDownTimeline_Finished() {
}

void AFlameJet2::AddBorder() {
}

void AFlameJet2::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFlameJet2, State);
}


