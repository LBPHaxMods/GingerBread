#include "StompySpaceLaser.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"

AStompySpaceLaser::AStompySpaceLaser(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LaserMesh"));
    this->LaserMesh = (UStaticMeshComponent*)RootComponent;
    this->DamageCollider = CreateDefaultSubobject<UCapsuleComponent>(TEXT("DamageCollider"));
    this->DamageInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("DamageInteraction"));
    this->HitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
    this->RampUpTime = 0.60f;
    this->RampDownTime = 0.40f;
    this->MinWidthMultiplier = 0.20f;
    this->MaxWidthMultiplier = 2.00f;
    this->NotDangerousMaterial = NULL;
    this->DangerousMaterial = NULL;
    this->State = EStompySpaceLaserState::UnInitialised;
    this->DamageCollider->SetupAttachment(RootComponent);
    this->DamageInteraction->SetupAttachment(DamageCollider);
}

void AStompySpaceLaser::OnRep_State() {
}

void AStompySpaceLaser::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AStompySpaceLaser, State);
    DOREPLIFETIME(AStompySpaceLaser, LaserServerData);
}


