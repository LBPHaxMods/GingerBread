#pragma once
#include "CoreMinimal.h"
#include "ENaomiMusicState.generated.h"

UENUM(BlueprintType)
enum class ENaomiMusicState : uint8 {
    Invalid,
    Normal,
    OnFloor,
    Defeated,
};

