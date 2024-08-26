#pragma once
#include "CoreMinimal.h"
#include "ESpaceRammerTeleportColourState.generated.h"

UENUM(BlueprintType)
enum class ESpaceRammerTeleportColourState : uint8 {
    NotTeleporting,
    TeleportingAway,
    TeleportingBack,
};

