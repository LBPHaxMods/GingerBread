#pragma once
#include "CoreMinimal.h"
#include "EHudAmbientTransformType.generated.h"

UENUM(BlueprintType)
enum class EHudAmbientTransformType : uint8 {
    Translational,
    Rotational,
};

