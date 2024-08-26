#include "GingerbreadWidgetComponent.h"

UGingerbreadWidgetComponent::UGingerbreadWidgetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CanCharacterStepUpOn = ECB_No;
    this->MimicTextureParamName = TEXT("Albedo Opacity map");
    this->MimicTintParamName = TEXT("Albedo Tint");
    this->MimicOpacityParamName = TEXT("Opacity");
    this->DisallowLayeringOnTop = false;
    this->WidgetDilation = 1.00f;
}

void UGingerbreadWidgetComponent::SetWidgetDilation(float NewDilation) {
}



UGingerbreadScreen* UGingerbreadWidgetComponent::GetOwningScreen() const {
    return NULL;
}

AGingerbreadHUD* UGingerbreadWidgetComponent::GetHUD() const {
    return NULL;
}

bool UGingerbreadWidgetComponent::DisallowsLayering() const {
    return false;
}


