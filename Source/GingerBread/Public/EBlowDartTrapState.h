#pragma once
#include "CoreMinimal.h"
#include "EBlowDartTrapState.generated.h"

UENUM(BlueprintType)
enum class EBlowDartTrapState : uint8 {
    Idle,
    Warning,
    Fire,
};

