#pragma once
#include "CoreMinimal.h"
#include "EHerdingCritterManipulatorType.generated.h"

UENUM(BlueprintType)
enum class EHerdingCritterManipulatorType : uint8 {
    Attractor,
    Repeller,
};

