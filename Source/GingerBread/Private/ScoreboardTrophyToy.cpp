#include "ScoreboardTrophyToy.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "SackboyToyComponent.h"

AScoreboardTrophyToy::AScoreboardTrophyToy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    this->GoldMaterial = NULL;
    this->SilverMaterial = NULL;
    this->BronzeMaterial = NULL;
    this->MeshComponent = (UStaticMeshComponent*)RootComponent;
    this->ToyComponent = CreateDefaultSubobject<USackboyToyComponent>(TEXT("ToyComponent"));
    this->CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent"));
    this->ToyComponent->SetupAttachment(RootComponent);
    this->CapsuleComponent->SetupAttachment(RootComponent);
}

void AScoreboardTrophyToy::OnSackboyThrow(ASackboy* InSackboy, const FVector InVelocity, int32 InPower) {
}

void AScoreboardTrophyToy::OnSackboyPickUp(ASackboy* InSackboy) {
}

void AScoreboardTrophyToy::OnSackboyDrop(ASackboy* InSackboy) {
}


