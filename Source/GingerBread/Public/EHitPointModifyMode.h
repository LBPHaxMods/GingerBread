#pragma once
#include "CoreMinimal.h"
#include "EHitPointModifyMode.generated.h"

UENUM(BlueprintType)
enum class EHitPointModifyMode : uint8 {
    Damage,
    Heal,
    Stun,
};

