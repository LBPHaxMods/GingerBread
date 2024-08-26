#pragma once
#include "CoreMinimal.h"
#include "ELevelResetBehaviour.generated.h"

UENUM(BlueprintType)
namespace ELevelResetBehaviour {
    enum Type {
        DefaultZero,
        SubLevels,
        Players,
        All,
    };
}

