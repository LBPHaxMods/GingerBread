#pragma once
#include "CoreMinimal.h"
#include "EDemoScreenPlayerState.generated.h"

UENUM(BlueprintType)
enum class EDemoScreenPlayerState : uint8 {
    Invalid,
    None,
    Joinable,
    SelectingCostume,
    Ready,
    SelectingLevel,
};

