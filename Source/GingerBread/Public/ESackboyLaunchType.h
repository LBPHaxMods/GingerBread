#pragma once
#include "CoreMinimal.h"
#include "ESackboyLaunchType.generated.h"

UENUM(BlueprintType)
enum class ESackboyLaunchType : uint8 {
    Bounce,
    Wind,
    Damaged,
    GravityForce,
    PumpPad,
    Enemy,
    Bubble,
    BouncePad,
    Sackboy,
    SackboyInAir,
    HitHeadOnSackboy,
    SpatOut,
    FallThroughSupport,
    LeapFrog,
    BlackHole,
    ExitUnicycle,
    ZipLine,
};

