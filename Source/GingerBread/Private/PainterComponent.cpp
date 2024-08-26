#include "PainterComponent.h"

UPainterComponent::UPainterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UPainterComponent::Paint(FLinearColor ColourToPaint) {
}

bool UPainterComponent::IsPainted() {
    return false;
}

void UPainterComponent::InitMaterials() {
}

FLinearColor UPainterComponent::GetColour() {
    return FLinearColor{};
}

void UPainterComponent::Clean() {
}


