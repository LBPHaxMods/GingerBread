#include "SlapBoltScrewMP.h"
#include "AkComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "HitPointsComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"

ASlapBoltScrewMP::ASlapBoltScrewMP(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

    this->Root = (USceneComponent*)RootComponent;
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->ScrewMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ScrewMesh"));
    this->CollisionMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CollisionMesh"));
    this->HitPointsComponent = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPointsComponent"));
    this->ConeInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("ConeInteraction"));

    this->AkComponent->SetupAttachment(ScrewMesh);
    this->ScrewMesh->SetupAttachment(RootComponent);
    this->CollisionMesh->SetupAttachment(ScrewMesh);
    this->HitPointsComponent->SetupAttachment(RootComponent);
    this->ConeInteraction->SetupAttachment(ScrewMesh);
}

void ASlapBoltScrewMP::OnRep_AUTHHandlePosition() {
}

void ASlapBoltScrewMP::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASlapBoltScrewMP, AUTHHandlePosition);
}


