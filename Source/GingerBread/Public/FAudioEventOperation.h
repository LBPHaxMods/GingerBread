#pragma once
#include "CoreMinimal.h"
#include "FAudioEventOperation.generated.h"

UENUM(BlueprintType)
enum class FAudioEventOperation : uint8 {
    PLAY,
    STOP,
    MAX_COUNT,
};

