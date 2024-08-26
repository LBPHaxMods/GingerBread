#pragma once
#include "CoreMinimal.h"
#include "ECopterZoneType.generated.h"

UENUM(BlueprintType)
enum class ECopterZoneType : uint8 {
    Box,
    Sphere,
    Capsule,
};

