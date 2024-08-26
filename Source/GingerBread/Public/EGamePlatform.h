#pragma once
#include "CoreMinimal.h"
#include "EGamePlatform.generated.h"

UENUM(BlueprintType)
enum class EGamePlatform : uint8 {
    Other,
    Epic,
    Steam,
};

