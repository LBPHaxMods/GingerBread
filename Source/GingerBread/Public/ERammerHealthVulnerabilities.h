#pragma once
#include "CoreMinimal.h"
#include "ERammerHealthVulnerabilities.generated.h"

UENUM(BlueprintType)
enum class ERammerHealthVulnerabilities : uint8 {
    Invalid,
    Default,
    RollBlock,
    Armoured,
    Flipped,
};

