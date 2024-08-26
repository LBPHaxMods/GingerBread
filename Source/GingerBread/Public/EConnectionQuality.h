#pragma once
#include "CoreMinimal.h"
#include "EConnectionQuality.generated.h"

UENUM(BlueprintType)
enum class EConnectionQuality : uint8 {
    Excellent,
    Good,
    Average,
    Poor,
    Terrible,
};

