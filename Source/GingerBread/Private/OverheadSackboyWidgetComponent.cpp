#include "OverheadSackboyWidgetComponent.h"

UOverheadSackboyWidgetComponent::UOverheadSackboyWidgetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BlockedActivities.AddDefaulted(9);
    this->NameTurnOffDelay = 5.00f;
    this->NoFlyTurnOffDelay = 5.00f;
    this->OwningSackboy = NULL;
    this->DesiredVisibility = false;
    this->IsInGameplayScreen = false;
    this->MenuIconEnabled = false;
    this->NameEnabled = false;
    this->NameEnabledTime = 0.00f;
    this->PendingNameOff = false;
    this->NoFlyEnabled = false;
    this->PendingNoFlyOff = false;
    this->NoFlyEnabledTime = 0.00f;
    this->PositionIndicatorEnabled = false;
}

void UOverheadSackboyWidgetComponent::UpdateVisibility() {
}

void UOverheadSackboyWidgetComponent::UpdateTransform() {
}

void UOverheadSackboyWidgetComponent::UpdateDesiredVisibility() {
}

bool UOverheadSackboyWidgetComponent::ShouldDisplayPositionIndicator() {
    return false;
}

void UOverheadSackboyWidgetComponent::SetPlayerNameAndColour() {
}




void UOverheadSackboyWidgetComponent::ResetPosition() {
}

bool UOverheadSackboyWidgetComponent::IsPlayerReady() {
    return false;
}



void UOverheadSackboyWidgetComponent::EnablePositionIndicator(bool indicatorEnabled) {
}

void UOverheadSackboyWidgetComponent::EnableNoFlyIndicator(bool Show) {
}


void UOverheadSackboyWidgetComponent::EnableName() {
}

void UOverheadSackboyWidgetComponent::EnableMenuIcon(bool IsInMenu) {
}










