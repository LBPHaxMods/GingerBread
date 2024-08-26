#include "CollectableBase.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "CraftCutterTargetComponent.h"
#include "GameplayTagComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "SackboyTracker.h"
#include "TriggerActorComponent.h"

ACollectableBase::ACollectableBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComponent"));

    this->CollisionComponent = (USphereComponent*)RootComponent;
    this->InteractionComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("InteractionComponent"));
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->CraftCutterTargetComponent = CreateDefaultSubobject<UCraftCutterTargetComponent>(TEXT("CraftCutterTargetComponent"));
    this->GameplayTagComponent = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTagComponent"));
    this->AkComponent = NULL;
    this->SackboyTracker = CreateDefaultSubobject<USackboyTracker>(TEXT("SackboyTracker"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->ShouldDestroyOnCollected = true;
    this->CanImmediatelyCollectFromPickupContainer = false;
    this->CollectingSackboyFromInitialisation = NULL;
    this->ShouldUseSackboyTracker = true;
    this->ShouldUseCraftCutterTarget = true;
    this->TrackCollection = false;
    this->InteractionComponent->SetupAttachment(RootComponent);
    this->StaticMeshComponent->SetupAttachment(RootComponent);
    this->CraftCutterTargetComponent->SetupAttachment(RootComponent);
    this->GameplayTagComponent->SetupAttachment(RootComponent);
}

void ACollectableBase::OnSackboyTrackerDistanceExited(const int32 Index, ASackboy* pSackboy) {
}

void ACollectableBase::OnSackboyTrackerDistanceEntered(const int32 Index, ASackboy* pSackboy) {
}

void ACollectableBase::OnRep_ReplicatedState(const FCollectableReplicatedState PreviousState) {
}

ASackboy* ACollectableBase::GetCollectingSackboy() const {
    return NULL;
}

TEnumAsByte<ECollectableAction::Type> ACollectableBase::GetAction() const {
    return ECollectableAction::Idling;
}

void ACollectableBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACollectableBase, ReplicatedState);
}


