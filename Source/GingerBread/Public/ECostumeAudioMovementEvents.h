#pragma once
#include "CoreMinimal.h"
#include "ECostumeAudioMovementEvents.generated.h"

UENUM(BlueprintType)
enum class ECostumeAudioMovementEvents : uint8 {
    Default,
    Footsteps,
    Jump,
    Land,
    FlutterJump,
    Roll,
    Headstomp,
    Slapspin,
    Slap,
    Rolldive,
    Pickup,
    Throw,
    TakeDamage,
    FlutterJumpStop,
    RollStop,
    MAX_COUNT,
};

