#pragma once
#include "CoreMinimal.h"
#include "EMuteAntThrownState.generated.h"

UENUM(BlueprintType)
enum class EMuteAntThrownState : uint8 {
    Invalid,
    Thrown,
    LandImpact,
    LandedLoop,
    Recovery,
    NumStates,
};

