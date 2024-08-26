#pragma once
#include "CoreMinimal.h"
#include "ERollPathState.generated.h"

UENUM(BlueprintType)
enum class ERollPathState : uint8 {
    NotYetUnrolled,
    Unrolled,
    Any,
};

