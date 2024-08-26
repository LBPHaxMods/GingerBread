#pragma once
#include "CoreMinimal.h"
#include "EJumpStompTargetType.generated.h"

UENUM(BlueprintType)
enum class EJumpStompTargetType : uint8 {
    Standard,
    Sackboy,
    Flagline,
    Enemy,
};

