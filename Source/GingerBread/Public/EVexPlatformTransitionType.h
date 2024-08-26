#pragma once
#include "CoreMinimal.h"
#include "EVexPlatformTransitionType.generated.h"

UENUM(BlueprintType)
enum class EVexPlatformTransitionType : uint8 {
    Linear,
    Spherical,
    Cylindrical,
};

