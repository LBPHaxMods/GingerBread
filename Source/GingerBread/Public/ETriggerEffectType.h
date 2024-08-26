#pragma once
#include "CoreMinimal.h"
#include "ETriggerEffectType.generated.h"

UENUM(BlueprintType)
enum class ETriggerEffectType : uint8 {
    Off,
    Vibration,
    Weapon,
    Feedback,
};

