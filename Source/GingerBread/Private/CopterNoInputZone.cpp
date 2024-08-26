#include "CopterNoInputZone.h"
#include "Components/SceneComponent.h"

ACopterNoInputZone::ACopterNoInputZone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

    this->Type = ECopterZoneType::Box;
    this->Box = NULL;
    this->Sphere = NULL;
    this->Capsule = NULL;
    this->InteractComponent = NULL;
}

void ACopterNoInputZone::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ACopterNoInputZone::OnEndInteract(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void ACopterNoInputZone::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ACopterNoInputZone::OnBeginInteract(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}


