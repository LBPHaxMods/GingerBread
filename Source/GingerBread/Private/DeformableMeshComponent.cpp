#include "DeformableMeshComponent.h"
#include "Components/BoxComponent.h"

UDeformableMeshComponent::UDeformableMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaximumDepression = 20.00f;
    this->ForceForMaximumDepression = 25.00f;
    this->IndentFalloff = 5.00f;
    this->IndentMultiplier = 0.40f;
    this->PenetrationThreshold = 0.20f;
    this->ConstantReinflation = false;
    this->ReinflationTime = 20.00f;
    this->ReinflationMinimumAmount = 0.01f;
    this->BounceFactor = 1.00f;
    this->ArtMesh = NULL;
    this->ArtDeformation = NULL;
    this->HeightMultiplier = NULL;
    this->ShouldDeformCollision = true;
    this->DebugOutput = false;
    this->tCollideBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionTracker"));
}

void UDeformableMeshComponent::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}


