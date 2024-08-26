#pragma once
#include "CoreMinimal.h"
#include "EVexFinalItemAttackType.generated.h"

UENUM(BlueprintType)
enum class EVexFinalItemAttackType : uint8 {
    Box,
    Bomb,
    Mixed,
    Random,
};

