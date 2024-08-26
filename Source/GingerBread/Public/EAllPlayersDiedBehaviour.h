#pragma once
#include "CoreMinimal.h"
#include "EAllPlayersDiedBehaviour.generated.h"

UENUM(BlueprintType)
enum class EAllPlayersDiedBehaviour : uint8 {
    Respawn,
    LevelReset,
    LevelResetIfEnabled_Respawn,
};

