#pragma once
#include "CoreMinimal.h"
#include "TutorialTriggerMode.generated.h"

UENUM(BlueprintType)
enum class TutorialTriggerMode : uint8 {
    TriggerVolume,
    CraftCutter,
    GrappleHook = 3,
    Blasters,
    FirstSnowballEngagement = 254,
    FirstToyEngagement,
};

