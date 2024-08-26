#include "FlameJet.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CSPTimelineComponent -FallbackName=CSPTimelineComponent
#include "Components/StaticMeshComponent.h"
#include "HitPointsModifierComponent.h"
#include "Net/UnrealNetwork.h"
#include "TriggerActorComponent.h"

AFlameJet::AFlameJet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Root"));

    this->Root = (UStaticMeshComponent*)RootComponent;
    this->Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
    this->MovementCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("MovementCollision"));
    this->AkFlameJet = CreateDefaultSubobject<UAkComponent>(TEXT("AkFlameJet"));
    this->AkHapticsFlameJet = CreateDefaultSubobject<UAkComponent>(TEXT("AkHapticsFlameJet"));
    this->HitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->WarmUpTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("WarmUpTimeline"));
    this->CoolDownTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("CoolDownTimeline"));
    this->FlamePanelStaticMesh = NULL;
    this->FlamePanelParentMaterial = NULL;
    this->WarmUpTimelineAlphaCurve = NULL;
    this->CoolDownTimelineAlphaCurve = NULL;
    this->FlameJetsOn = NULL;
    this->FlameJetsOff = NULL;
    this->FlameJetsSmallOn = NULL;
    this->FlameJetsSmallOff = NULL;
    this->FlameJetsWindUp = NULL;
    this->FlameJetsSmallWindUp = NULL;
    this->FlameJetsOnHapticsEvent = NULL;
    this->FlameJetsOffHapticsEvent = NULL;
    this->FlameJetsWindUpOnHapticsEvent = NULL;
    this->FlameJetsWindUpOffHapticsEvent = NULL;
    this->WindUpParticles = NULL;
    this->WindUpParticlesVariant = NULL;
    this->WindUpDissipationParticles = NULL;
    this->Mode = EFlameJetMode::LoopStates;
    this->ResetParticlesOnFlameDissipation = true;
    this->ResetParticlesOnFlameDeactivation = true;
    this->bInitialActivationFromTrigger = false;
    this->Rows = 2;
    this->Columns = 2;
    this->MaxEmissiveValue = 30.00f;
    this->EnableBaseCollision = true;
    this->TallFlames = false;
    this->VariantFlames = true;
    this->LargeFlame = true;
    this->StayOn = false;
    this->StayOff = false;
    this->StartDelay = 0.00f;
    this->WarmupTime = 1.50f;
    this->ActiveTime = 1.50f;
    this->CooldownTime = 0.50f;
    this->InactiveTime = 1.00f;
    this->HeatMat = NULL;
    this->State = EFlameJetState::Sleeping;
    this->bLightmapTypeFixed = false;
    this->Box->SetupAttachment(RootComponent);
    this->MovementCollision->SetupAttachment(RootComponent);
    this->AkFlameJet->SetupAttachment(RootComponent);
    this->AkHapticsFlameJet->SetupAttachment(RootComponent);
}

void AFlameJet::WarmUpTimeline_Update(float Alpha) {
}

void AFlameJet::WarmUpTimeline_Finished() {
}

void AFlameJet::SetMode(TEnumAsByte<EFlameJetMode::Type> NewMode) {
}

void AFlameJet::OnRep_State() {
}

void AFlameJet::OnExitFlameJet(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex) {
}

void AFlameJet::OnEnterFlameJet(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AFlameJet::CoolDownTimeline_Update(float Alpha) {
}

void AFlameJet::CoolDownTimeline_Finished() {
}

void AFlameJet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFlameJet, State);
}


