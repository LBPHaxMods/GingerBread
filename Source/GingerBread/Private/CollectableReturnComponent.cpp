#include "CollectableReturnComponent.h"

UCollectableReturnComponent::UCollectableReturnComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DirectionAlphaCurve = NULL;
    this->SpeedAlphaCurve = NULL;
    this->SpeedCurve = NULL;
}


