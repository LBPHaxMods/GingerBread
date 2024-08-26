#pragma once
#include "CoreMinimal.h"
#include "EVexFinalTileState.generated.h"

UENUM(BlueprintType)
enum class EVexFinalTileState : uint8 {
    NotMoving,
    FloatyWobble,
    Breaking,
    PostBreak,
};

