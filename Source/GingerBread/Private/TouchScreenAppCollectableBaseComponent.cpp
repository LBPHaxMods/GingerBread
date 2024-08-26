#include "TouchScreenAppCollectableBaseComponent.h"
#include "Net/UnrealNetwork.h"

UTouchScreenAppCollectableBaseComponent::UTouchScreenAppCollectableBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEssential = false;
    this->bResetWhenActivated = false;
    this->ObjectTypeToSpawn = NULL;
    this->FadeDurationOnCollect = 0.50f;
    this->bHasMovement = false;
    this->MovementSpeed = 10.00f;
    this->JumpForce = 50.00f;
    this->Material_FadeIn = NULL;
    this->Material_FadeOut = NULL;
    this->SpawnHeight = 2.00f;
    this->CollectableSMP = NULL;
    this->Collision = NULL;
    this->Interaction = NULL;
    this->bActivationByCelebrationApp = false;
}

void UTouchScreenAppCollectableBaseComponent::SpawnCollectable(ASackboy* Sackboy) {
}

void UTouchScreenAppCollectableBaseComponent::OnSpawnedFadeInComplete() {
}

void UTouchScreenAppCollectableBaseComponent::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UTouchScreenAppCollectableBaseComponent::OnInteractionBegin(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp) {
}




bool UTouchScreenAppCollectableBaseComponent::GetIsActiavtedByCelebrationApp() const {
    return false;
}

void UTouchScreenAppCollectableBaseComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTouchScreenAppCollectableBaseComponent, CollectableSMP);
    DOREPLIFETIME(UTouchScreenAppCollectableBaseComponent, Collision);
    DOREPLIFETIME(UTouchScreenAppCollectableBaseComponent, Interaction);
    DOREPLIFETIME(UTouchScreenAppCollectableBaseComponent, MoveDirection);
    DOREPLIFETIME(UTouchScreenAppCollectableBaseComponent, bActivationByCelebrationApp);
    DOREPLIFETIME(UTouchScreenAppCollectableBaseComponent, CurrentPosition);
}


