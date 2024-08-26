#pragma once
#include "CoreMinimal.h"
#include "EHudAmbientMovementType.generated.h"

UENUM(BlueprintType)
enum class EHudAmbientMovementType : uint8 {
    None,
    Planar,
    Spherical,
};

