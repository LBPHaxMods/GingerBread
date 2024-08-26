#include "InteractiveDecorator.h"

AInteractiveDecorator::AInteractiveDecorator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RTResolutionScale = 0.50f;
    this->PlayerRadius = 1.50f;
    this->PlayerFalloffHardness = 0.00f;
    this->CaptureBoundsPadding = 10.00f;
    this->PlayerBrushMaterial = NULL;
    this->PlayerMaskRT = NULL;
    this->PlayerBrushDMI = NULL;
}


