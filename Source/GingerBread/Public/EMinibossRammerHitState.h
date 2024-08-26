#pragma once
#include "CoreMinimal.h"
#include "EMinibossRammerHitState.generated.h"

UENUM(BlueprintType)
enum class EMinibossRammerHitState : uint8 {
    Invalid,
    Stomped,
    Dazed,
    SlapLoop,
    SlapLand,
    Barged,
    NumStates,
};

