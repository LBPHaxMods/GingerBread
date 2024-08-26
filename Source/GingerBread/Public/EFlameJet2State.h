#pragma once
#include "CoreMinimal.h"
#include "EFlameJet2State.generated.h"

UENUM(BlueprintType)
enum class EFlameJet2State : uint8 {
    Sleeping,
    WarmUp,
    Active,
    CoolDown,
    Inactive,
};

