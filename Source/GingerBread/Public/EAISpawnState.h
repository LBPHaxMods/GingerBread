#pragma once
#include "CoreMinimal.h"
#include "EAISpawnState.generated.h"

UENUM(BlueprintType)
enum class EAISpawnState : uint8 {
    Default,
    FromGround,
    FromAir,
    NumStates,
};

