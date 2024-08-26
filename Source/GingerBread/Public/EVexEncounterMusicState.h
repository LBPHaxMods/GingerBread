#pragma once
#include "CoreMinimal.h"
#include "EVexEncounterMusicState.generated.h"

UENUM(BlueprintType)
enum class EVexEncounterMusicState : uint8 {
    Invalid,
    Phase1,
    Rage1,
    Phase2,
    Rage2,
    Phase3,
    End,
};

