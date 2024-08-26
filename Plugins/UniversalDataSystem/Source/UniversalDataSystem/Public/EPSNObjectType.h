#pragma once
#include "CoreMinimal.h"
#include "EPSNObjectType.generated.h"

UENUM(BlueprintType)
enum class EPSNObjectType : uint8 {
    Undefined,
    Activity,
    Zone,
    Mechanic,
};

