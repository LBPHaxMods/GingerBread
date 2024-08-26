#include "Umbrella.h"
#include "AkComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameplayTagComponent.h"
#include "SackboyToyComponent.h"

AUmbrella::AUmbrella(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent"));
    this->CapsuleComponent = (UCapsuleComponent*)RootComponent;
    this->ToyComponent = CreateDefaultSubobject<USackboyToyComponent>(TEXT("ToyComponent"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AK Component"));
    this->GameplayTagComponent = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("Gameplay Tag Component"));
    this->UmbrellaMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Umbrella Mesh"));

    this->OpenUmbrellaSFX = NULL;
    this->CloseUmbrellaSFX = NULL;
    this->OpenSpeedThreshold = 8.00f;
    this->MeshRollScale = 0.50f;
    this->ToyComponent->SetupAttachment(RootComponent);
    this->AkComponent->SetupAttachment(RootComponent);
    this->GameplayTagComponent->SetupAttachment(RootComponent);
    this->UmbrellaMesh->SetupAttachment(RootComponent);
}

void AUmbrella::OnThrowToy(ASackboy* theSackboy, const FVector throwVelocity, int32 throwPower) {
}


void AUmbrella::OnStopAbility(ESackboyToyAbility Ability) {
}



void AUmbrella::OnStartAbility(ESackboyToyAbility Ability) {
}

void AUmbrella::OnRollStop(ASackboy* theSackboy) {
}

void AUmbrella::OnRollStart(ASackboy* theSackboy) {
}

void AUmbrella::OnPickedUp(ASackboy* theSackboy) {
}


void AUmbrella::OnDropped(ASackboy* theSackboy) {
}



