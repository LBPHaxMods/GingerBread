#pragma once
#include "CoreMinimal.h"
#include "EESportsCreatinatorTurretAnimState.generated.h"

UENUM(BlueprintType)
enum class EESportsCreatinatorTurretAnimState : uint8 {
    Idle,
    Charge,
    Shoot,
};

