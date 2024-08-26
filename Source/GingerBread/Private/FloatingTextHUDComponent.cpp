#include "FloatingTextHUDComponent.h"

UFloatingTextHUDComponent::UFloatingTextHUDComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WidgetTemplate = NULL;
}

void UFloatingTextHUDComponent::PlayText(const FText& Text, const FVector& Position, const FVector2D& ScreenOffset) {
}


