#pragma once
#include "CoreMinimal.h"
#include "EPopshotHealthVulnerabilities.generated.h"

UENUM(BlueprintType)
enum class EPopshotHealthVulnerabilities : uint8 {
    Invalid,
    Default,
    Cowering,
    TailGrabbed,
};

