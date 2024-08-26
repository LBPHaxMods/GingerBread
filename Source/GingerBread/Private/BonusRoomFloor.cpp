#include "BonusRoomFloor.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "InteractionComponent.h"

ABonusRoomFloor::ABonusRoomFloor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    this->TriggerBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBoxComponent"));
    this->TriggerInteractComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("TriggerInteractComponent"));
    this->SpawnPointComponent0 = CreateDefaultSubobject<UArrowComponent>(TEXT("SpawnPointComponent0"));
    this->SpawnPointComponent1 = CreateDefaultSubobject<UArrowComponent>(TEXT("SpawnPointComponent1"));
    this->SpawnPointComponent2 = CreateDefaultSubobject<UArrowComponent>(TEXT("SpawnPointComponent2"));
    this->SpawnPointComponent3 = CreateDefaultSubobject<UArrowComponent>(TEXT("SpawnPointComponent3"));
    this->SpawnPointTransforms.AddDefaulted(4);
    this->TriggerBoxComponent->SetupAttachment(RootComponent);
    this->TriggerInteractComponent->SetupAttachment(RootComponent);
    this->SpawnPointComponent0->SetupAttachment(RootComponent);
    this->SpawnPointComponent1->SetupAttachment(RootComponent);
    this->SpawnPointComponent2->SetupAttachment(RootComponent);
    this->SpawnPointComponent3->SetupAttachment(RootComponent);
}

void ABonusRoomFloor::OnTriggerBoxComponentOverlapped(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ABonusRoomFloor::OnTriggerBoxComponentInteract(UInteractionComponent* pOverlappedComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp) {
}


