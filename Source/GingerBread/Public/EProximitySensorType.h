#pragma once
#include "CoreMinimal.h"
#include "EProximitySensorType.generated.h"

UENUM(BlueprintType)
enum class EProximitySensorType : uint8 {
    Sphere,
    Box,
};

