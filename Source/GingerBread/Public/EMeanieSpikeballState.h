#pragma once
#include "CoreMinimal.h"
#include "EMeanieSpikeballState.generated.h"

UENUM(BlueprintType)
enum class EMeanieSpikeballState : uint8 {
    Invalid,
    Neither,
    RightOnly,
    LeftOnly,
    Both,
    NumStates,
};

