#pragma once
#include "CoreMinimal.h"
#include "EVexAttackLoopTriggerType.generated.h"

UENUM(BlueprintType)
enum class EVexAttackLoopTriggerType : uint8 {
    Invalid,
    Normal,
    EnterStage,
    PostStun,
    PostConsecutiveHits,
};

