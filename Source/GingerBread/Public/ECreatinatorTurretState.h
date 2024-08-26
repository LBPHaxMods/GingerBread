#pragma once
#include "CoreMinimal.h"
#include "ECreatinatorTurretState.generated.h"

UENUM(BlueprintType)
enum class ECreatinatorTurretState : uint8 {
    Idle,
    Targeting,
    ConstantFire,
    Manual,
};

