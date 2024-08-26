#include "TreasureObject.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "TriggerActorComponent.h"

ATreasureObject::ATreasureObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SceneRoot"));

    this->Collision = (USphereComponent*)RootComponent;
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerComponent"));
    this->HitPoints = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPoints"));
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->Interaction = CreateDefaultSubobject<UInteractionComponent>(TEXT("Interaction"));

    this->DefaultHitReactionStrength = 5.00f;
    this->RollHitReactionStrength = 5.00f;
    this->SlapHitReactionStrength = 5.00f;
    this->OnHitTorqueStrength = 5.00f;
    this->bWantDarkMatterEngineRelativeUpdate = false;
    this->Mesh->SetupAttachment(RootComponent);
    this->HitPoints->SetupAttachment(RootComponent);
    this->GameplayTag->SetupAttachment(RootComponent);
    this->Interaction->SetupAttachment(RootComponent);
}

void ATreasureObject::OnHit(UPrimitiveComponent* targetPrim, AActor* SourceActor, UPrimitiveComponent* sourcePrim, FVector NormalImpulse, const FHitResult& Hit) {
}

void ATreasureObject::Multicast_DoHitReaction_Implementation(const FVector Impulse, const FVector Torque) {
}

void ATreasureObject::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATreasureObject, bWantDarkMatterEngineRelativeUpdate);
}


