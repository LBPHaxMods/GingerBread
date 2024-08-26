#pragma once
#include "CoreMinimal.h"
#include "ESackboyToyHoldType.generated.h"

UENUM(BlueprintType)
enum class ESackboyToyHoldType : uint8 {
    InHand,
    InOffhand,
    Carry,
    AtRoot,
};

