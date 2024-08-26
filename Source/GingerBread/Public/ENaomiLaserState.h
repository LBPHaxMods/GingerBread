#pragma once
#include "CoreMinimal.h"
#include "ENaomiLaserState.generated.h"

UENUM(BlueprintType)
enum class ENaomiLaserState : uint8 {
    Invalid,
    Enter,
    Shoot,
    Exit,
};

