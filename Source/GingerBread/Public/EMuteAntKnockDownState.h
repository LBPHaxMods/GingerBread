#pragma once
#include "CoreMinimal.h"
#include "EMuteAntKnockDownState.generated.h"

UENUM(BlueprintType)
enum class EMuteAntKnockDownState : uint8 {
    Invalid,
    Falling,
    DownLoop,
    GetBackUp,
    NumStates,
};

