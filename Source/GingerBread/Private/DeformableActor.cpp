#include "DeformableActor.h"
#include "DeformableMeshComponent.h"

ADeformableActor::ADeformableActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UDeformableMeshComponent>(TEXT("GeneratedMesh"));
    this->Mesh = (UDeformableMeshComponent*)RootComponent;
}

void ADeformableActor::ReinflateMesh_Implementation() {
}

void ADeformableActor::MeshGeneration_Implementation() {
}


