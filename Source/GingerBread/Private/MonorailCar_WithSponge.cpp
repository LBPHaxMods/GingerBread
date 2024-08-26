#include "MonorailCar_WithSponge.h"
#include "Components/StaticMeshComponent.h"
#include "GameplayTagComponent.h"

AMonorailCar_WithSponge::AMonorailCar_WithSponge(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpongeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sponge"));
    this->SpongeGamePlayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("SpongeGamePlayTag"));
    this->SpongeMesh->SetupAttachment(StaticMesh);
    this->SpongeGamePlayTag->SetupAttachment(SpongeMesh);
}


