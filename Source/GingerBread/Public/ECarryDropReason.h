#pragma once
#include "CoreMinimal.h"
#include "ECarryDropReason.generated.h"

UENUM(BlueprintType)
enum class ECarryDropReason : uint8 {
    Thrown,
    Other,
};

