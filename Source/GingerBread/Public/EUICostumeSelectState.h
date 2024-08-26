#pragma once
#include "CoreMinimal.h"
#include "EUICostumeSelectState.generated.h"

UENUM(BlueprintType)
enum class EUICostumeSelectState : uint8 {
    SelectingCostume,
    SelectingPin,
    Ready,
};

