#pragma once
#include "CoreMinimal.h"
#include "EPufferFishAnimState.generated.h"

UENUM(BlueprintType)
enum class EPufferFishAnimState : uint8 {
    Idle,
    Celebrate,
    Hit,
};

