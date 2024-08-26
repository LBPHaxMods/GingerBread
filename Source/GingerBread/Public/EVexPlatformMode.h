#pragma once
#include "CoreMinimal.h"
#include "EVexPlatformMode.generated.h"

UENUM(BlueprintType)
enum class EVexPlatformMode : uint8 {
    Create,
    Destroy,
};

