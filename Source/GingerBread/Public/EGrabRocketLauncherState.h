#pragma once
#include "CoreMinimal.h"
#include "EGrabRocketLauncherState.generated.h"

UENUM(BlueprintType)
enum class EGrabRocketLauncherState : uint8 {
    Idle,
    PrepareForLaunch,
    ReadyForLaunch,
    Ignition,
    Launch,
    Exploded,
};

