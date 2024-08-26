#pragma once
#include "CoreMinimal.h"
#include "ESackboyCoopMove.generated.h"

UENUM(BlueprintType)
enum class ESackboyCoopMove : uint8 {
    NotActive,
    SuperSlap,
    MegaSlap,
    SuperRoll,
    MegaRoll,
    RollRiding,
};

