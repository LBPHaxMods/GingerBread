#pragma once
#include "CoreMinimal.h"
#include "FInteractionType.generated.h"

UENUM(BlueprintType)
enum class FInteractionType : uint8 {
    Standard,
    Grab,
};

