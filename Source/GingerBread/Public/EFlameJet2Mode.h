#pragma once
#include "CoreMinimal.h"
#include "EFlameJet2Mode.generated.h"

UENUM(BlueprintType)
enum class EFlameJet2Mode : uint8 {
    AlwaysInactive,
    AlwaysActive,
    LoopStates,
};

