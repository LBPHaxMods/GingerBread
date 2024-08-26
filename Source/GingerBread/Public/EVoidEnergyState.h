#pragma once
#include "CoreMinimal.h"
#include "EVoidEnergyState.generated.h"

UENUM(BlueprintType)
enum class EVoidEnergyState : uint8 {
    Idle,
    Collecting,
    Collected,
};

