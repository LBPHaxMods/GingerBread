#pragma once
#include "CoreMinimal.h"
#include "ESackboyCannonState.generated.h"

UENUM(BlueprintType)
enum class ESackboyCannonState : uint8 {
    Jumping,
    Idling,
    Firing,
    Fired_Ball,
    Fired_Spread,
    Invalid = 254,
};

