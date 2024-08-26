#pragma once
#include "CoreMinimal.h"
#include "EEnableGameTriggerActivationMode.generated.h"

UENUM(BlueprintType)
enum class EEnableGameTriggerActivationMode : uint8 {
    Automatic,
    AlwaysActive,
};

