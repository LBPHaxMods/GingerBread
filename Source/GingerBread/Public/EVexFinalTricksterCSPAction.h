#pragma once
#include "CoreMinimal.h"
#include "EVexFinalTricksterCSPAction.generated.h"

UENUM(BlueprintType)
enum class EVexFinalTricksterCSPAction : uint8 {
    ChangeState,
    Trailing,
    ActivateTrick,
    SwapSackboys,
};

