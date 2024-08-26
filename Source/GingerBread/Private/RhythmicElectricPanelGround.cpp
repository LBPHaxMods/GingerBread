#include "RhythmicElectricPanelGround.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "TriggerActorComponent.h"

ARhythmicElectricPanelGround::ARhythmicElectricPanelGround(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    this->HitpointsCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("HitpointsCollider"));
    this->MovementCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("MovementCollider"));
    this->GameplayTagComp = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTags"));
    this->HitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
    this->Ak_RhythmicElectricPanelGround = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_RhythmicElectricPanelGround"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->HitPointsInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("HitPointsInteraction"));
    this->ElectrocutedAudio = NULL;
    this->TimeToLockSound = 3.00f;
    this->OnAudioEvent = NULL;
    this->OffAudioEvent = NULL;
    this->ElectrictyParticle = NULL;
    this->VFXHeightOffset = 2.30f;
    this->PanelHeight = 0.50f;
    this->PanelSize = 30.00f;
    this->VFXCollisionHeight = 1.00f;
    this->VFXCollisionEdgeInset = 1.00f;
    this->NumRows = 1;
    this->NumColumns = 1;
    this->Server_IsEnabled = true;
    this->Local_IsEnabled = true;
    this->EnabledAtStart = true;
    this->InstancedPanels = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("InstStaticMesh"));
    this->InstancedPanels->SetupAttachment(RootComponent);
    this->HitpointsCollider->SetupAttachment(RootComponent);
    this->MovementCollider->SetupAttachment(RootComponent);
    this->GameplayTagComp->SetupAttachment(RootComponent);
    this->Ak_RhythmicElectricPanelGround->SetupAttachment(RootComponent);
    this->HitPointsInteraction->SetupAttachment(RootComponent);
}

void ARhythmicElectricPanelGround::OnRhythmicBeatPostDelay() {
}

void ARhythmicElectricPanelGround::OnRep_Enabled() {
}

void ARhythmicElectricPanelGround::OnPostHitPointsModificationAttempt(const FHitPointModifyResult& Result) {
}

void ARhythmicElectricPanelGround::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARhythmicElectricPanelGround, Server_IsEnabled);
}


