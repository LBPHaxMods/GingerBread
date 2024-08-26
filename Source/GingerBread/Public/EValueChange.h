#pragma once
#include "CoreMinimal.h"
#include "EValueChange.generated.h"

UENUM(BlueprintType)
namespace EValueChange {
    enum Type {
        Constant,
        Increasing,
        Decreasing,
    };
}

