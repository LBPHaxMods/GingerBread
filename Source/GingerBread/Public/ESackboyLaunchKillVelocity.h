#pragma once
#include "CoreMinimal.h"
#include "ESackboyLaunchKillVelocity.generated.h"

UENUM(BlueprintType)
enum class ESackboyLaunchKillVelocity : uint8 {
    LeaveVel,
    KillVel,
    KillVelInVecDir,
    KillVelOnce,
};

