#include "PhaseLightObject.h"
#include "Components/BillboardComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "TriggerActorComponent.h"

APhaseLightObject::APhaseLightObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("LightSource"));
    this->LightRadius = 30.00f;
    this->IsActive = true;
    this->LightSource = (USceneComponent*)RootComponent;
    this->SphereCollisionBlocking = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollisionBlocking"));
    this->SphereCollisionOverlap = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollisionOverlap"));
    this->InteractionOverlap = CreateDefaultSubobject<UInteractionComponent>(TEXT("InteractionOverlap"));
    this->BillboardComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->SphereCollisionBlocking->SetupAttachment(RootComponent);
    this->SphereCollisionOverlap->SetupAttachment(SphereCollisionBlocking);
    this->InteractionOverlap->SetupAttachment(SphereCollisionBlocking);
    this->BillboardComponent->SetupAttachment(RootComponent);
}

void APhaseLightObject::OnRep_IsActive() {
}

void APhaseLightObject::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APhaseLightObject, IsActive);
}


