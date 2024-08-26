#pragma once
#include "CoreMinimal.h"
#include "EWorldUnlockFlow.generated.h"

UENUM(BlueprintType)
enum class EWorldUnlockFlow : uint8 {
    BeforePlayerSpawn,
    BeforeUnlockLoop,
    DuringUnlockLoop,
};

