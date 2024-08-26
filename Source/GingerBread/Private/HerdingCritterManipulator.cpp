#include "HerdingCritterManipulator.h"
#include "Components/BillboardComponent.h"
#include "Components/SphereComponent.h"
#include "InteractionComponent.h"
#include "TriggerActorComponent.h"

AHerdingCritterManipulator::AHerdingCritterManipulator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("InfluenceSphere"));
    this->InfluenceSphere = (USphereComponent*)RootComponent;
    this->InfluenceInteractSphere = CreateDefaultSubobject<UInteractionComponent>(TEXT("InfluenceInteractSphere"));
    this->Billboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->Radius = 25.00f;
    this->Strength = 1.00f;
    this->Type = EHerdingCritterManipulatorType::Attractor;
    this->ToggleOnAtStart = true;
    this->InfluenceInteractSphere->SetupAttachment(RootComponent);
    this->Billboard->SetupAttachment(RootComponent);
}

void AHerdingCritterManipulator::OnInfluenceSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AHerdingCritterManipulator::OnInfluenceSphereEndInteract(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void AHerdingCritterManipulator::OnInfluenceSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AHerdingCritterManipulator::OnInfluenceSphereBeginInteract(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}


