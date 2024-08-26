#pragma once
#include "CoreMinimal.h"
#include "ERhythmicFlameJetState.generated.h"

UENUM(BlueprintType)
enum class ERhythmicFlameJetState : uint8 {
    Sleeping,
    WarmUp,
    Active,
    CoolDown,
    Inactive,
};

