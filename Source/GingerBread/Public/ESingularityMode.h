#pragma once
#include "CoreMinimal.h"
#include "ESingularityMode.generated.h"

UENUM(BlueprintType)
enum class ESingularityMode : uint8 {
    LOOP,
    SINGLE_USE,
};

