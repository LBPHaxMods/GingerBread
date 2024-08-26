#pragma once
#include "CoreMinimal.h"
#include "ESpikeyRollerAudioType.generated.h"

UENUM(BlueprintType)
enum class ESpikeyRollerAudioType : uint8 {
    Static_Ground,
    Static_Floating,
    MovedExternally_Ground,
};

