#pragma once
#include "CoreMinimal.h"
#include "EAIExternalManipulationReason.generated.h"

UENUM(BlueprintType)
enum class EAIExternalManipulationReason : uint8 {
    Invalid,
    Bubble,
    Velociporter,
    CloudPlatform,
};

