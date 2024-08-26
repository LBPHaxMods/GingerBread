#pragma once
#include "CoreMinimal.h"
#include "ESackboyAnimIntoJumpType.generated.h"

UENUM(BlueprintType)
enum class ESackboyAnimIntoJumpType : uint8 {
    JumpFromStanding,
    JumpFromWalkLeftFoot,
    JumpFromWalkRightFoot,
    HeadStompToFlutter,
};

