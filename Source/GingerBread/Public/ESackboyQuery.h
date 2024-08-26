#pragma once
#include "CoreMinimal.h"
#include "ESackboyQuery.generated.h"

UENUM(BlueprintType)
enum class ESackboyQuery : uint8 {
    All,
    InPlay,
    InPlayAndCopters,
};

