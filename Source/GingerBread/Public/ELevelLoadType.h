#pragma once
#include "CoreMinimal.h"
#include "ELevelLoadType.generated.h"

UENUM(BlueprintType)
enum class ELevelLoadType : uint8 {
    FreshLoad,
    ReloadFromCheckpoint,
    ReloadFromStart,
    Reset,
};

