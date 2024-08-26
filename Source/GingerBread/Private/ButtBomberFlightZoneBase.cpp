#include "ButtBomberFlightZoneBase.h"
#include "Components/SceneComponent.h"
#include "InteractionComponent.h"
#include "OverlapManagerComponent.h"

AButtBomberFlightZoneBase::AButtBomberFlightZoneBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
    this->InnerOverlapManager = CreateDefaultSubobject<UOverlapManagerComponent>(TEXT("InnerOverlapComponent"));
    this->OuterOverlapManager = CreateDefaultSubobject<UOverlapManagerComponent>(TEXT("OuterOverlapComponent"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->InnerCollider = NULL;
    this->OuterCollider = NULL;
    this->InnerInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("InnerInteractionComponent"));
    this->OuterInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("OuterInteractionComponent"));
}

void AButtBomberFlightZoneBase::OnOuterEndOverlapAnyActor(UOverlapManagerComponent* OverlapManagerComponent, UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AButtBomberFlightZoneBase::OnOuterEndInteractAnyActor(UOverlapManagerComponent* OverlapManagerComponent, UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void AButtBomberFlightZoneBase::OnOuterBeginOverlapAnyActor(UOverlapManagerComponent* OverlapManagerComponent, UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AButtBomberFlightZoneBase::OnOuterBeginInteractAnyActor(UOverlapManagerComponent* OverlapManagerComponent, UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void AButtBomberFlightZoneBase::OnInnerEndOverlapAnyActor(UOverlapManagerComponent* OverlapManagerComponent, UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AButtBomberFlightZoneBase::OnInnerEndInteractAnyActor(UOverlapManagerComponent* OverlapManagerComponent, UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void AButtBomberFlightZoneBase::OnInnerBeginOverlapAnyActor(UOverlapManagerComponent* OverlapManagerComponent, UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AButtBomberFlightZoneBase::OnInnerBeginInteractAnyActor(UOverlapManagerComponent* OverlapManagerComponent, UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}


