#pragma once
#include "CoreMinimal.h"
#include "EPowerPin.generated.h"

UENUM(BlueprintType)
enum class EPowerPin : uint8 {
    None,
    Reckless,
    Devoted,
    Volatile,
    HeadBanger,
    DoubleOrNothing,
    HeavyRoller,
    Magnetic,
    Feather,
    GlassCannon,
    Juggernaut,
    ExplorationTax,
    Count,
};

