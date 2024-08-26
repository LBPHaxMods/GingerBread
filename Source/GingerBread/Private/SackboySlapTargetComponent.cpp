#include "SackboySlapTargetComponent.h"

USackboySlapTargetComponent::USackboySlapTargetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tag = TEXT("SlapTarget");
    this->SlapTargetType = ESlapTargetType::None;
}


