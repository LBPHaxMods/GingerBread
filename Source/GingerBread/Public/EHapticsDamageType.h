#pragma once
#include "CoreMinimal.h"
#include "EHapticsDamageType.generated.h"

UENUM(BlueprintType)
enum class EHapticsDamageType : uint8 {
    HDT_Slap,
    HDT_HeadStomp,
    HDT_Bounce,
    HDT_RollInto,
    HDT_Count,
};

