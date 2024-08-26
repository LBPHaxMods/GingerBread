#include "ElectricPanelGround.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "TriggerActorComponent.h"

AElectricPanelGround::AElectricPanelGround(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    this->HitpointsCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("HitpointsCollider"));
    this->MovementCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("MovementCollider"));
    this->GameplayTagComp = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTags"));
    this->Ak_ElectricPanelGround = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_ElectricPanelGround"));
    this->HitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
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
    this->IsActive = true;
    this->IsEnabled = true;
    this->InstancedPanels = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("InstStaticMesh"));
    this->InstancedPanels->SetupAttachment(RootComponent);
    this->HitpointsCollider->SetupAttachment(RootComponent);
    this->MovementCollider->SetupAttachment(RootComponent);
    this->GameplayTagComp->SetupAttachment(RootComponent);
    this->Ak_ElectricPanelGround->SetupAttachment(RootComponent);
    this->HitPointsInteraction->SetupAttachment(RootComponent);
}

void AElectricPanelGround::OnRep_Enabled() {
}

void AElectricPanelGround::OnRep_Active() {
}

void AElectricPanelGround::OnPostHitPointsModificationAttempt(const FHitPointModifyResult& Result) {
}

void AElectricPanelGround::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AElectricPanelGround, IsActive);
    DOREPLIFETIME(AElectricPanelGround, IsEnabled);
}


