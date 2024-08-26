#pragma once
#include "CoreMinimal.h"
#include "ECreatinatorTurretAnimState.generated.h"

UENUM(BlueprintType)
enum class ECreatinatorTurretAnimState : uint8 {
    Idle,
    Charge,
    Shoot,
};

