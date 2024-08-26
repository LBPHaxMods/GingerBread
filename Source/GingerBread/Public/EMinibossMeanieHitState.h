#pragma once
#include "CoreMinimal.h"
#include "EMinibossMeanieHitState.generated.h"

UENUM(BlueprintType)
enum class EMinibossMeanieHitState : uint8 {
    Invalid,
    Stomp,
    Weakspot,
    NumStates,
};

