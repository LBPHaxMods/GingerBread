#pragma once
#include "CoreMinimal.h"
#include "EButtBomber2GenericState.generated.h"

UENUM(BlueprintType)
enum class EButtBomber2GenericState : uint8 {
    Invalid,
    Idle,
    Stomp,
    Stuck,
    Hit,
    Death,
    NumStates,
};

