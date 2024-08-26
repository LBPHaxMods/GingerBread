#include "BossDoorway.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"

ABossDoorway::ABossDoorway(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FrameCollisionComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FrameCollisionComponent"));
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->DoorCollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("DoorCollisionComponent"));
    this->EntranceDetectionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("EntranceDetectionComponent"));
    this->EntranceInteractionComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("EntranceInteractionComponent"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_BossDoorway"));
    this->DoorOpeningAnimationDuration = 1.40f;
    this->IsDoorOpen = false;
    this->FrameCollisionComponent->SetupAttachment(RootComponent);
    this->SkeletalMeshComponent->SetupAttachment(FrameCollisionComponent);
    this->DoorCollisionComponent->SetupAttachment(FrameCollisionComponent);
    this->EntranceDetectionComponent->SetupAttachment(RootComponent);
    this->EntranceInteractionComponent->SetupAttachment(RootComponent);
    this->AkComponent->SetupAttachment(RootComponent);
}

void ABossDoorway::OnRep_IsDoorOpen() {
}

void ABossDoorway::OnEntranceDetectionBeginOverlap(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ABossDoorway::OnEntranceDetectionBeginInteract(UInteractionComponent* pOverlappedComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp) {
}

void ABossDoorway::OnDoorOpeningAnimationFinished() {
}

void ABossDoorway::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABossDoorway, IsDoorOpen);
}


