#pragma once
#include "CoreMinimal.h"
#include "EBootVideoType.generated.h"

UENUM(BlueprintType)
enum class EBootVideoType : uint8 {
    Invalid,
    SIE,
    PS_STUDIOS,
    SUMO_SAT_RED_HIGH_QUALITY,
};

