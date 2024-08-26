#include "TouchScreenAppBaseComponent.h"
#include "Net/UnrealNetwork.h"

UTouchScreenAppBaseComponent::UTouchScreenAppBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FadeFloatCurve = NULL;
    this->SortPriority = -1;
    this->bIsEssential = true;
    this->bResetWhenActivated = true;
    this->bHideCodeGeneratedVisuals = false;
    this->AppName = TEXT("Page_0__0");
    this->AppID = 0;
    this->FadeTimeline = NULL;
    this->ParentTouchScreen = NULL;
    this->Page = 0;
    this->bLocked = true;
}

void UTouchScreenAppBaseComponent::UpdateLockState_ServerRPC_Implementation(bool bNewLocked) {
}

void UTouchScreenAppBaseComponent::SetPage(const int32 NewPage) {
}

void UTouchScreenAppBaseComponent::OnRep_Locked() {
}


void UTouchScreenAppBaseComponent::OnBSOD(float Duration) {
}

int32 UTouchScreenAppBaseComponent::GetPage() const {
    return 0;
}

USceneComponent* UTouchScreenAppBaseComponent::GetAppRoot() {
    return NULL;
}

void UTouchScreenAppBaseComponent::FadeTimelineFinishedCallback() {
}

void UTouchScreenAppBaseComponent::FadeTimelineCallback(const float val) {
}



void UTouchScreenAppBaseComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTouchScreenAppBaseComponent, bLocked);
}


