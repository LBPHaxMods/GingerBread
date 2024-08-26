#pragma once
#include "CoreMinimal.h"
#include "EHapticsDamageResult.generated.h"

UENUM(BlueprintType)
enum class EHapticsDamageResult : uint8 {
    HDR_NoDamage,
    HDR_Damage,
    HDR_Kill,
    HDR_Count,
};

