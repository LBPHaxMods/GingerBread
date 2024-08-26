#include "SurfaceDeformationComponent.h"

USurfaceDeformationComponent::USurfaceDeformationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InteractionRadiusMultiplier = 1.00f;
    this->MaxInteractionRadius = 15.00f;
    this->IsSackboy = false;
    this->PositionSmoothingSpeed = 5.00f;
    this->SpeedSmoothingSpeed = 5.00f;
}


