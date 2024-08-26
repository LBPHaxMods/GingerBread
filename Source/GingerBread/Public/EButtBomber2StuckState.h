#pragma once
#include "CoreMinimal.h"
#include "EButtBomber2StuckState.generated.h"

UENUM(BlueprintType)
enum class EButtBomber2StuckState : uint8 {
    Invalid,
    Struggle,
    RecoverStart,
    RecoverFinish,
    Dazed,
    Hit,
    NumStates,
};

