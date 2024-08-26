#pragma once
#include "CoreMinimal.h"
#include "EHitPointModifyStatus.generated.h"

UENUM(BlueprintType)
enum class EHitPointModifyStatus : uint8 {
    None,
    Processed,
    InvalidRequest,
    TargetPrimNotRegistered,
    ActorIgnoredByModifier,
    HitPointsInCoolDown,
    RejectedByPriorityFilter,
    RejectedBySourceOverride,
    RejectedByTargetOverride,
    Parried,
};

