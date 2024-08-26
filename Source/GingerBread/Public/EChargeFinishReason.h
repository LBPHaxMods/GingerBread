#pragma once
#include "CoreMinimal.h"
#include "EChargeFinishReason.generated.h"

UENUM(BlueprintType)
enum class EChargeFinishReason : uint8 {
    Invalid,
    ReachedDestination,
    HitSomething,
    DamagedSomething,
    StoppedAtEdge,
    Fell,
    NumStates,
};

