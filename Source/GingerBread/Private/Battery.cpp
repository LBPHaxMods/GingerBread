#include "Battery.h"
#include "Components/StaticMeshComponent.h"
#include "GameplayTagComponent.h"
#include "GrappleTargetComponent.h"
#include "HitPointsComponent.h"
#include "InteractionComponent.h"

ABattery::ABattery(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BatteryMesh"));
    this->Tags.AddDefaulted(1);
    this->BatteryMesh = (UStaticMeshComponent*)RootComponent;
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->GrappleTarget = CreateDefaultSubobject<UGrappleTargetComponent>(TEXT("GrappleTarget"));
    this->HitPoints = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPoints"));
    this->Interact = CreateDefaultSubobject<UInteractionComponent>(TEXT("InteractComp"));

    this->HitImpulseMultiplier = 20.00f;
    this->HitTimer = 0.20f;
    this->GameplayTag->SetupAttachment(RootComponent);
    this->GrappleTarget->SetupAttachment(RootComponent);
    this->Interact->SetupAttachment(RootComponent);
}

void ABattery::Multicast_ApplyImpulse_Implementation(const FVector Impulse, const FVector Location) {
}


