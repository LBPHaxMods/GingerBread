#pragma once
#include "CoreMinimal.h"
#include "EEnemyLevelType.generated.h"

UENUM(BlueprintType)
enum class EEnemyLevelType : uint8 {
    Standard,
    Arena,
    NumStates,
};

