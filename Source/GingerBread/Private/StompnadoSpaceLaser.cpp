#include "StompnadoSpaceLaser.h"
#include "Components/StaticMeshComponent.h"

AStompnadoSpaceLaser::AStompnadoSpaceLaser(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LaserMesh"));
    this->LaserMesh = (UStaticMeshComponent*)RootComponent;
    this->MaxWidthMultiplier = 2.00f;
    this->LaserMaterial = NULL;
}

void AStompnadoSpaceLaser::InitialiseLaser(AActor* FromActor, AActor* ToActor) {
}

void AStompnadoSpaceLaser::DisableLaser() {
}


