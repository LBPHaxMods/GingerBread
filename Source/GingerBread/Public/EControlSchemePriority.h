#pragma once
#include "CoreMinimal.h"
#include "EControlSchemePriority.generated.h"

UENUM(BlueprintType)
namespace EControlSchemePriority {
    enum Type {
        Common,
        UIMenus,
        ClientQuit,
        LocalDropInOut,
        MAX_COUNT,
    };
}

