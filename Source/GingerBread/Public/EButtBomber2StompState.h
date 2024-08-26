#pragma once
#include "CoreMinimal.h"
#include "EButtBomber2StompState.generated.h"

UENUM(BlueprintType)
enum class EButtBomber2StompState : uint8 {
    Invalid,
    Anticipation,
    Fall,
    Land,
    BumpWall,
    NumStates,
};

