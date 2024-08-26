#include "TouchScreenAppBalloonComponent.h"
#include "Net/UnrealNetwork.h"

UTouchScreenAppBalloonComponent::UTouchScreenAppBalloonComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CollectableClass = NULL;
    this->Material_Idle = NULL;
    this->Material_FadeIn = NULL;
    this->Material_FadeOut = NULL;
    this->Material_Bounce = NULL;
    this->Material_Pop = NULL;
    this->BalloonPopTime = 1.00f;
    this->TranslucentSortPriority = -1;
    this->MovementSpeed = 1.00f;
    this->EdgeTolerance = 0.03f;
    this->FadeFloatCurve = NULL;
    this->BalloonAppearEvent = NULL;
    this->BalloonCollectedEvent = NULL;
    this->BounceEffectToIdleDelay = 0.50f;
    this->BalloonSMP = NULL;
    this->Collision = NULL;
    this->Interaction = NULL;
}

void UTouchScreenAppBalloonComponent::ResetToIdleMaterial() {
}

void UTouchScreenAppBalloonComponent::PlayPopVfx_Implementation() {
}


void UTouchScreenAppBalloonComponent::OnSpawnedFadeInComplete() {
}

void UTouchScreenAppBalloonComponent::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UTouchScreenAppBalloonComponent::OnInteractionBegin(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp) {
}



void UTouchScreenAppBalloonComponent::DestroyBalloon() {
}


void UTouchScreenAppBalloonComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTouchScreenAppBalloonComponent, Colour);
    DOREPLIFETIME(UTouchScreenAppBalloonComponent, BalloonSMP);
    DOREPLIFETIME(UTouchScreenAppBalloonComponent, Collision);
    DOREPLIFETIME(UTouchScreenAppBalloonComponent, Interaction);
}


