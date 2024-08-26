#pragma once
#include "CoreMinimal.h"
#include "EGruntyChaseType.generated.h"

UENUM(BlueprintType)
enum class EGruntyChaseType : uint8 {
    Invalid,
    Unstacked,
    Stacked,
};

