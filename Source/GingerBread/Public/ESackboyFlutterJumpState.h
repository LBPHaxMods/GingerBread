#pragma once
#include "CoreMinimal.h"
#include "ESackboyFlutterJumpState.generated.h"

UENUM(BlueprintType)
enum class ESackboyFlutterJumpState : uint8 {
    StandardFlutter,
    CarryingFlutter,
    FlutterLoop,
    CarryingFlutterLoop,
    FromRollStomp,
};

