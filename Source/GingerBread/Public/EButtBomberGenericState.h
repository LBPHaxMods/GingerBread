#pragma once
#include "CoreMinimal.h"
#include "EButtBomberGenericState.generated.h"

UENUM(BlueprintType)
enum class EButtBomberGenericState : uint8 {
    Invalid,
    Idle,
    Stomp,
    Stuck,
    Hit,
    Death,
    NumStates,
};

