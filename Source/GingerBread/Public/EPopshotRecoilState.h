#pragma once
#include "CoreMinimal.h"
#include "EPopshotRecoilState.generated.h"

UENUM(BlueprintType)
enum class EPopshotRecoilState : uint8 {
    Invalid,
    Wait,
    Return,
    HitWall,
    NumStates,
};

