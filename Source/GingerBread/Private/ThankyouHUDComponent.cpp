#include "ThankyouHUDComponent.h"

UThankyouHUDComponent::UThankyouHUDComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IntroAnimName = TEXT("intro");
    this->LoopAnimName = TEXT("Loop");
    this->OutroAnimName = TEXT("Outro");
    this->WaitTime = 5.00f;
    this->activeWidget = NULL;
    this->IntroAnim = NULL;
    this->LoopAnim = NULL;
    this->OutroAnim = NULL;
}

void UThankyouHUDComponent::TriggerScreen() {
}

void UThankyouHUDComponent::OnWidgetReady() {
}

void UThankyouHUDComponent::OnWaitTimeFinished() {
}

void UThankyouHUDComponent::OnOutroFinished() {
}

void UThankyouHUDComponent::OnIntroFinished() {
}

void UThankyouHUDComponent::CreateWidget() {
}


