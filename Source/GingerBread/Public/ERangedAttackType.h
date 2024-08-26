#pragma once
#include "CoreMinimal.h"
#include "ERangedAttackType.generated.h"

UENUM(BlueprintType)
enum class ERangedAttackType : uint8 {
    AT_Target,
    AT_ChainTarget,
    AT_AOE,
    AT_Line,
    AT_SubAOE,
};

