#pragma once
#include "CoreMinimal.h"
#include "EUDSActivityType.generated.h"

UENUM(BlueprintType)
enum class EUDSActivityType : uint8 {
    AT_Explorer,
    AT_Level,
    AT_OpenEnded,
    AT_Challenge,
    AT_Count,
};

