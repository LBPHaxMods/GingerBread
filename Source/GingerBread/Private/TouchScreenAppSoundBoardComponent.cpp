#include "TouchScreenAppSoundBoardComponent.h"

UTouchScreenAppSoundBoardComponent::UTouchScreenAppSoundBoardComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Decal = NULL;
    this->Collision = NULL;
    this->Interaction = NULL;
    this->DecalMaterial = NULL;
    this->Sound = NULL;
    this->PlaceholderSound = NULL;
    this->DecalDynamicMaterial = NULL;
    this->bCreateDynamicInBP = false;
}

void UTouchScreenAppSoundBoardComponent::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UTouchScreenAppSoundBoardComponent::OnInteractionBegin(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp) {
}


