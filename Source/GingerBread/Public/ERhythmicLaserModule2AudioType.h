#pragma once
#include "CoreMinimal.h"
#include "ERhythmicLaserModule2AudioType.generated.h"

UENUM(BlueprintType)
enum class ERhythmicLaserModule2AudioType : uint8 {
    Static,
    BackAndForth,
    CircularRotation,
};

