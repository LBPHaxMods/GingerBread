#pragma once
#include "CoreMinimal.h"
#include "EDuopedePositions.generated.h"

UENUM(BlueprintType)
enum class EDuopedePositions : uint8 {
    Front,
    Middle,
    Rear,
    Alone,
};

