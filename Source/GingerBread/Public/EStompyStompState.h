#pragma once
#include "CoreMinimal.h"
#include "EStompyStompState.generated.h"

UENUM(BlueprintType)
enum class EStompyStompState : uint8 {
    Invalid,
    Anticipate,
    Jump,
    Fall,
    Slam,
    Cooldown,
    NumStates,
};

