#pragma once
#include "CoreMinimal.h"
#include "ESniperReloadState.generated.h"

UENUM(BlueprintType)
enum class ESniperReloadState : uint8 {
    Invalid,
    ReloadStart,
    EquipArm,
    PassUp,
};

