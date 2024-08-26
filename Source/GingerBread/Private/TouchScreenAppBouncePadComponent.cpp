#include "TouchScreenAppBouncePadComponent.h"

UTouchScreenAppBouncePadComponent::UTouchScreenAppBouncePadComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEssential = false;
    this->LaunchSpeed = 112.00f;
    this->Manual = false;
    this->OneShot = false;
    this->GridX = 1;
    this->GridY = 1;
    this->VibrationEffect = NULL;
    this->VibrationName = TEXT("BouncePadJumpedOn");
    this->LaunchedAudioEvent = NULL;
    this->LaunchedAudioLaunchRTPCName = TEXT("bouncepad_launchspeed");
    this->BouncePadClass = NULL;
    this->DecalMaterial = NULL;
    this->Collision = NULL;
    this->Interaction = NULL;
    this->DecalDynamicMaterial = NULL;
    this->bCreateDynamicInBP = false;
    this->bGridChanged = true;
}

void UTouchScreenAppBouncePadComponent::OnTriggered(AActor* LaunchedActor, UPrimitiveComponent* launchedPrim, const FVector& launchDirection, const FVector& approxHitPosition) {
}

void UTouchScreenAppBouncePadComponent::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UTouchScreenAppBouncePadComponent::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UTouchScreenAppBouncePadComponent::OnInteractionEnd(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void UTouchScreenAppBouncePadComponent::OnInteractionBegin(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

bool UTouchScreenAppBouncePadComponent::IsEnabled() {
    return false;
}

bool UTouchScreenAppBouncePadComponent::GetManual() {
    return false;
}

float UTouchScreenAppBouncePadComponent::GetDuration() {
    return 0.0f;
}

float UTouchScreenAppBouncePadComponent::GetDelay() {
    return 0.0f;
}

void UTouchScreenAppBouncePadComponent::GetBounceSpeedData(FBounceSpeedData& BounceSpeedData) const {
}

int32 UTouchScreenAppBouncePadComponent::CalculateBouncePadIndex(const FVector hitPos) const {
    return 0;
}


