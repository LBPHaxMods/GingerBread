#pragma once
#include "CoreMinimal.h"
#include "EMinibossMeanieAdditiveState.generated.h"

UENUM(BlueprintType)
enum class EMinibossMeanieAdditiveState : uint8 {
    Invalid,
    Short,
    Long,
    NumStates,
};

