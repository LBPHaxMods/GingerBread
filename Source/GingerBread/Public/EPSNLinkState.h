#pragma once
#include "CoreMinimal.h"
#include "EPSNLinkState.generated.h"

UENUM(BlueprintType)
enum class EPSNLinkState : uint8 {
    UnLinked,
    Linked,
};

