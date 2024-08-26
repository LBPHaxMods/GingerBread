#pragma once
#include "CoreMinimal.h"
#include "EAIDeathType.generated.h"

UENUM(BlueprintType)
enum class EAIDeathType : uint8 {
    Slap,
    JumpedOn,
    Rollinto,
    NumStates,
};

