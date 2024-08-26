#pragma once
#include "CoreMinimal.h"
#include "EMeanieHitState.generated.h"

UENUM(BlueprintType)
enum class EMeanieHitState : uint8 {
    Invalid,
    Stomp,
    Weakspot,
    NumStates,
};

