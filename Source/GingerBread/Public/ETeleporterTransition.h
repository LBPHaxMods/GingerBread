#pragma once
#include "CoreMinimal.h"
#include "ETeleporterTransition.generated.h"

UENUM(BlueprintType)
enum class ETeleporterTransition : uint8 {
    Pan,
    Cut,
    Cinematic,
};

