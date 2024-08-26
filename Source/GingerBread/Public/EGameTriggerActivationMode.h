#pragma once
#include "CoreMinimal.h"
#include "EGameTriggerActivationMode.generated.h"

UENUM(BlueprintType)
enum class EGameTriggerActivationMode : uint8 {
    Automatic,
    AlwaysActive,
};

