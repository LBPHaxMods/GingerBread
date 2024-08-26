#pragma once
#include "CoreMinimal.h"
#include "EHudAmbientTransformSpace.generated.h"

UENUM(BlueprintType)
enum class EHudAmbientTransformSpace : uint8 {
    RelativeToScreen,
    RelativeToComponent,
};

