#pragma once
#include "CoreMinimal.h"
#include "EButtBomberStuckState.generated.h"

UENUM(BlueprintType)
enum class EButtBomberStuckState : uint8 {
    Invalid,
    Struggle,
    RecoverStart,
    RecoverFinish,
    Dazed,
    Hit,
    NumStates,
};

