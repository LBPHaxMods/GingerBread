#pragma once
#include "CoreMinimal.h"
#include "EDecoItemSelectionMethod.generated.h"

UENUM(BlueprintType)
enum class EDecoItemSelectionMethod : uint8 {
    ListLoop,
    ListLoopRandomStart,
    Random,
};

