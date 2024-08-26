#pragma once
#include "CoreMinimal.h"
#include "ESackboyAnimIntoWalkType.generated.h"

UENUM(BlueprintType)
enum class ESackboyAnimIntoWalkType : uint8 {
    FromSlide,
    FromLedgeGrab,
    FromOnBack,
    FromIdleToRun,
    StandingTurn,
    FromOnFront,
    FromSitting,
};

