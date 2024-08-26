#pragma once
#include "CoreMinimal.h"
#include "EButtBomberStompState.generated.h"

UENUM(BlueprintType)
enum class EButtBomberStompState : uint8 {
    Invalid,
    Anticipation,
    Fall,
    Land,
    BumpWall,
    NumStates,
};

