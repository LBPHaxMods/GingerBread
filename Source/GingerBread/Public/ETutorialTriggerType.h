#pragma once
#include "CoreMinimal.h"
#include "ETutorialTriggerType.generated.h"

UENUM(BlueprintType)
enum class ETutorialTriggerType : uint8 {
    Global,
    Local,
};

