#pragma once
#include "CoreMinimal.h"
#include "ESackboySlapType.generated.h"

UENUM(BlueprintType)
enum class ESackboySlapType : uint8 {
    OnGround,
    InAir,
    EvadeSlap,
    RollSlap,
};

