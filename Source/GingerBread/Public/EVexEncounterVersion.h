#pragma once
#include "CoreMinimal.h"
#include "EVexEncounterVersion.generated.h"

UENUM(BlueprintType)
enum class EVexEncounterVersion : uint8 {
    Invalid,
    Vex1,
    Vex2,
    Vex3,
};

