#include "TouchScreenAppCheckboxComponent.h"
#include "Net/UnrealNetwork.h"

UTouchScreenAppCheckboxComponent::UTouchScreenAppCheckboxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CheckBoxMaterial = NULL;
    this->CheckBoxMaterial_FadeIn = NULL;
    this->CheckBoxMaterial_FadeOut = NULL;
    this->CheckMaterial = NULL;
    this->CheckMaterial_FadeIn = NULL;
    this->CheckMaterial_FadeOut = NULL;
    this->bStartChecked = false;
    this->CheckFloatCurve = NULL;
    this->bMPVariant = false;
    this->CheckedSound = NULL;
    this->UncheckedSound = NULL;
    this->CheckedHaptic = NULL;
    this->UncheckedHaptic = NULL;
    this->CheckedGamepadAudio = NULL;
    this->UncheckedGamepadAudio = NULL;
    this->CBBorderMeshComp = NULL;
    this->CheckTimeline = NULL;
    this->Collision = NULL;
    this->Interaction = NULL;
    this->bChecked = false;
}

void UTouchScreenAppCheckboxComponent::OnRepChecked() {
}

void UTouchScreenAppCheckboxComponent::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UTouchScreenAppCheckboxComponent::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UTouchScreenAppCheckboxComponent::OnInteractionEnd(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void UTouchScreenAppCheckboxComponent::OnInteractionBegin(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void UTouchScreenAppCheckboxComponent::CheckTimelineFinishedCallback() {
}

void UTouchScreenAppCheckboxComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTouchScreenAppCheckboxComponent, bChecked);
}


