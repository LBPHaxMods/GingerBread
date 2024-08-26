#pragma once
#include "CoreMinimal.h"
#include "EStompysteinPhase.generated.h"

UENUM(BlueprintType)
enum class EStompysteinPhase : uint8 {
    Invalid,
    Phase1,
    Phase2,
    Phase3,
};

