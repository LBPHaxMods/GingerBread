#include "BubbleBlowerToy.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "SackboyToyComponent.h"

ABubbleBlowerToy::ABubbleBlowerToy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    this->ToyComponent = CreateDefaultSubobject<USackboyToyComponent>(TEXT("ToyComponent"));
    this->AudioComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AudioComponent"));
    this->BoxCollisionComponent = (UBoxComponent*)RootComponent;

    this->TrailParticleSystem = NULL;
    this->OnSwingSFX = NULL;
    this->OnSwingBubbleCreatedSFX = NULL;
    this->TrailAttachmentName = TEXT("bubble");
    this->BubbleResizeDuration = 0.60f;
    this->BubbleFinalRadius = 7.00f;
    this->BubbleInitialLifespan = 6.00f;
    this->BubbleSackboyEnteredLifespan = 10.00f;
    this->BubbleDeathWobbleTime = 2.00f;
    this->IgnoreSpawningSackboyTime = 0.90f;
    this->SpawnBubbleOnce = false;
    this->AllowMultipleBubbles = true;
    this->DestroyBubbleOnSackboyExit = true;
    this->MeshComponent->SetupAttachment(RootComponent);
    this->ToyComponent->SetupAttachment(RootComponent);
    this->AudioComponent->SetupAttachment(RootComponent);
}

void ABubbleBlowerToy::OnThrow(ASackboy* InSackboy, const FVector InVelocity, int32 InPower) {
}

void ABubbleBlowerToy::OnSpawn(ASackboy* InSackboy, AActor* InSpawnedActor) {
}

void ABubbleBlowerToy::OnPickedUp(ASackboy* InSackboy) {
}

void ABubbleBlowerToy::OnDropped(ASackboy* InSackboy) {
}

bool ABubbleBlowerToy::HasSpawnedBubble() const {
    return false;
}


