#pragma once
#include "CoreMinimal.h"
#include "ESackboyAnimIntoIdleType.generated.h"

UENUM(BlueprintType)
enum class ESackboyAnimIntoIdleType : uint8 {
    NoInto,
    IdleSmallStop,
    IdleRunStop,
    IdleRunStopBig,
    IdleFromJumpFall,
    IdleFromLedgeGrab,
    IdleFromSliding,
    IdleFromDizzy,
    IdleFromOnBack,
    IdleFromOnFront,
    IdleFromSitting,
    IdleFromSkidding,
    IdleSwanDive,
    IdleFromOnFire,
    IdleFromElectrocuted,
    IdleFromRoll,
};

