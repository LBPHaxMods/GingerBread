#pragma once
#include "CoreMinimal.h"
#include "EBootVideoSubsequentType.generated.h"

UENUM(BlueprintType)
enum class EBootVideoSubsequentType : uint8 {
    Both,
    FirstTimeOnly,
    SubsequentOnly,
};

