#include "SMFuzzComponent.h"

USMFuzzComponent::USMFuzzComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Threshold = 0.10f;
    this->bManuallyEdited = false;
}

void USMFuzzComponent::UpdateUsingFuzzMaterialTable(USkeletalMeshComponent* SMC) {
}


