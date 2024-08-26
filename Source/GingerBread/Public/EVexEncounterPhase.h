#pragma once
#include "CoreMinimal.h"
#include "EVexEncounterPhase.generated.h"

UENUM(BlueprintType)
enum class EVexEncounterPhase : uint8 {
    Invalid,
    Phase1,
    Phase2,
    Phase3,
};

