#pragma once
#include "CoreMinimal.h"
#include "EDamageLevel.generated.h"

UENUM(BlueprintType)
enum class EDamageLevel : uint8 {
    Light,
    Medium,
    Heavy,
};

