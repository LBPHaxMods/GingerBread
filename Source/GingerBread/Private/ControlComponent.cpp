#include "ControlComponent.h"

UControlComponent::UControlComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UControlComponent::Remove(const UControlScheme* ControlSchemeTemplate) {
    return false;
}

bool UControlComponent::PUSH(const UControlScheme* ControlSchemeTemplate) {
    return false;
}

void UControlComponent::Pop() {
}

bool UControlComponent::IsCurrentControlSchemeEqual(const UControlScheme* ControlSchemeTemplate) {
    return false;
}

bool UControlComponent::IsActivityAllowed(ESackboyActivity Activity) const {
    return false;
}

FAppliedControlScheme UControlComponent::GetCurrentControlScheme() const {
    return FAppliedControlScheme{};
}

FName UControlComponent::GetBoundGamepadKeyNameForActionType(ESackboyActions ActionType, bool CheckAllPushedSchemes) const {
    return NAME_None;
}

FName UControlComponent::GetBoundGamepadKeyNameForActionName(FName ActionName, bool CheckAllPushedSchemes) const {
    return NAME_None;
}

int32 UControlComponent::Depth() const {
    return 0;
}


