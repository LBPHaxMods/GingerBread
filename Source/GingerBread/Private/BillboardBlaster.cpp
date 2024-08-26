#include "BillboardBlaster.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "BlastersTargetComponent.h"
#include "HitPointsComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "TriggerActorComponent.h"

ABillboardBlaster::ABillboardBlaster(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));

    this->Collision = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Collision"));
    this->Interaction = CreateDefaultSubobject<UInteractionComponent>(TEXT("Interaction"));
    this->BlastersTarget = CreateDefaultSubobject<UBlastersTargetComponent>(TEXT("BlastersTarget"));
    this->HitPoints = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPoints"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->ImpactVFX = NULL;
    this->DispatchDelay = 0.70f;
    this->State = EBillboardBlasterState::Idle;
    this->Collision->SetupAttachment(RootComponent);
    this->Interaction->SetupAttachment(RootComponent);
    this->BlastersTarget->SetupAttachment(RootComponent);
}

void ABillboardBlaster::PlayHitEffectsRPC_Implementation(FVector Location, FRotator Rotation) {
}

void ABillboardBlaster::OnRep_State() {
}

void ABillboardBlaster::Dispatch() {
}

void ABillboardBlaster::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABillboardBlaster, State);
}


