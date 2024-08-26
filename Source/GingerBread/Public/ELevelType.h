#pragma once
#include "CoreMinimal.h"
#include "ELevelType.generated.h"

UENUM(BlueprintType)
enum class ELevelType : uint8 {
    Himalaya,
    Amazon,
    Undersea,
    Space,
    Craftworld,
    Void,
    Count,
    None,
};

