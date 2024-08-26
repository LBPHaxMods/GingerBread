#pragma once
#include "CoreMinimal.h"
#include "EPrintMode.generated.h"

UENUM(BlueprintType)
enum class EPrintMode : uint8 {
    Continuous,
    Average,
};

