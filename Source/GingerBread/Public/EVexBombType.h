#pragma once
#include "CoreMinimal.h"
#include "EVexBombType.generated.h"

UENUM(BlueprintType)
enum class EVexBombType : uint8 {
    Invalid,
    ConveyorBomb,
    FinalFightBomb,
};

