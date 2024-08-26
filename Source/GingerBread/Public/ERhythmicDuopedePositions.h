#pragma once
#include "CoreMinimal.h"
#include "ERhythmicDuopedePositions.generated.h"

UENUM(BlueprintType)
enum class ERhythmicDuopedePositions : uint8 {
    Front,
    Middle,
    Rear,
    Alone,
};

