#pragma once
#include "CoreMinimal.h"
#include "EButtBomberHitState.generated.h"

UENUM(BlueprintType)
enum class EButtBomberHitState : uint8 {
    Invalid,
    Slapped,
    Stomped,
    NumStates,
};

