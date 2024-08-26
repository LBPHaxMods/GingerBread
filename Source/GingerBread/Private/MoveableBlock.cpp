#include "MoveableBlock.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

AMoveableBlock::AMoveableBlock(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->BoxSideLeft = CreateDefaultSubobject<UBoxComponent>(TEXT("Collider Left Side"));
    this->BoxTopLeft = CreateDefaultSubobject<UBoxComponent>(TEXT("Collider Left Top"));
    this->BoxTopRight = CreateDefaultSubobject<UBoxComponent>(TEXT("Collider Right Top"));
    this->BoxSideRight = CreateDefaultSubobject<UBoxComponent>(TEXT("Collider Right Side"));
    this->LeftDirectionSceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("Left Direction"));
    this->RightDirectionSceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("Right Direction"));
    this->SideImpulseMultiplier = 2.00f;
    this->TopImpulseMultiplier = 0.20f;
    this->SecondImpulseMultiplier = 0.70f;
    this->BoxSideLeft->SetupAttachment(RootComponent);
    this->BoxTopLeft->SetupAttachment(RootComponent);
    this->BoxTopRight->SetupAttachment(RootComponent);
    this->BoxSideRight->SetupAttachment(RootComponent);
    this->LeftDirectionSceneComp->SetupAttachment(RootComponent);
    this->RightDirectionSceneComp->SetupAttachment(RootComponent);
}

void AMoveableBlock::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AMoveableBlock::BeginOverlapTopRight(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AMoveableBlock::BeginOverlapTopLeft(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AMoveableBlock::BeginOverlapSideRight(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AMoveableBlock::BeginOverlapSideLeft(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


