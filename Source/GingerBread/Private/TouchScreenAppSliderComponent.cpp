#include "TouchScreenAppSliderComponent.h"
#include "Net/UnrealNetwork.h"

UTouchScreenAppSliderComponent::UTouchScreenAppSliderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SliderComponent = NULL;
    this->Collision = NULL;
    this->TetherComponent = NULL;
    this->Interaction = NULL;
    this->SliderMesh = NULL;
    this->TetherMesh = NULL;
    this->CollisionSizeModifier = 0.60f;
}

void UTouchScreenAppSliderComponent::OnRep_ServerData() {
}

void UTouchScreenAppSliderComponent::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UTouchScreenAppSliderComponent::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UTouchScreenAppSliderComponent::OnInteractionEnd(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void UTouchScreenAppSliderComponent::OnInteractionBegin(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp) {
}


void UTouchScreenAppSliderComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTouchScreenAppSliderComponent, SliderServerData);
}


