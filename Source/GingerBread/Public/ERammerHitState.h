#pragma once
#include "CoreMinimal.h"
#include "ERammerHitState.generated.h"

UENUM(BlueprintType)
enum class ERammerHitState : uint8 {
    Invalid,
    Stomped,
    Dazed,
    SlapLoop,
    SlapLand,
    Barged,
    NumStates,
};

