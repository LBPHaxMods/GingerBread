#pragma once
#include "CoreMinimal.h"
#include "EFishPlatformAction.generated.h"

UENUM(BlueprintType)
enum class EFishPlatformAction : uint8 {
    Asleep,
    Waiting,
    Signaling,
    Moving,
};

