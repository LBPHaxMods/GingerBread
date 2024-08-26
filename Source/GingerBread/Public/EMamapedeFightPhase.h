#pragma once
#include "CoreMinimal.h"
#include "EMamapedeFightPhase.generated.h"

UENUM(BlueprintType)
enum class EMamapedeFightPhase : uint8 {
    Invalid,
    WholeArena,
    VerticallyCracked,
    CrossCracked,
    Defeated,
    FightOver,
    NumStates,
};

