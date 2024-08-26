#pragma once
#include "CoreMinimal.h"
#include "ECostumeAudioFootstepEvents.generated.h"

UENUM(BlueprintType)
enum class ECostumeAudioFootstepEvents : uint8 {
    Default,
    Footsteps,
    Jump,
    Land,
    MAX_COUNT,
};

