#include "VexWaterVolume.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "ProcStaticMeshComponent.h"
#include "TriggerActorComponent.h"

AVexWaterVolume::AVexWaterVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

    this->Root = (USceneComponent*)RootComponent;
    this->HitPointsDamager = CreateDefaultSubobject<UBoxComponent>(TEXT("HitPointsDamager"));
    this->HitPointsInteract = CreateDefaultSubobject<UInteractionComponent>(TEXT("HitPointsInteract"));
    this->ProcStaticMeshComponent = CreateDefaultSubobject<UProcStaticMeshComponent>(TEXT("WaterMesh"));
    this->HitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->IsActive = true;
    this->AutoAlignWithWaterMesh = true;
    this->WaterMeshOffset = 2.00f;
    this->HitPointsDamager->SetupAttachment(RootComponent);
    this->HitPointsInteract->SetupAttachment(HitPointsDamager);
    this->ProcStaticMeshComponent->SetupAttachment(RootComponent);
}

void AVexWaterVolume::OnRep_IsActive() {
}

void AVexWaterVolume::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVexWaterVolume, IsActive);
}


