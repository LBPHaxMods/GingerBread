#pragma once
#include "CoreMinimal.h"
#include "EAIHitState.generated.h"

UENUM(BlueprintType)
enum class EAIHitState : uint8 {
    Invalid,
    Slapped,
    Stomped,
    Dazed,
    RolledInto,
    NumStates,
};

