#pragma once
#include "CoreMinimal.h"
#include "EVexFinalSplatState.generated.h"

UENUM(BlueprintType)
enum class EVexFinalSplatState : uint8 {
    Hidden,
    Anticipate,
    Attack,
};

