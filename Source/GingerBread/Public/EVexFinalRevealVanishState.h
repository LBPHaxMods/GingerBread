#pragma once
#include "CoreMinimal.h"
#include "EVexFinalRevealVanishState.generated.h"

UENUM(BlueprintType)
enum class EVexFinalRevealVanishState : uint8 {
    Vanished,
    Revealed,
    Vanishing,
    Revealing,
};

