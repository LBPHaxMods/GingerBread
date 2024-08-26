#pragma once
#include "CoreMinimal.h"
#include "EESportsSpikeyRollerAudioType.generated.h"

UENUM(BlueprintType)
enum class EESportsSpikeyRollerAudioType : uint8 {
    Static_Ground,
    Static_Floating,
    MovedExternally_Ground,
};

