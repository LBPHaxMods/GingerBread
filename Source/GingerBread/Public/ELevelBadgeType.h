#pragma once
#include "CoreMinimal.h"
#include "ELevelBadgeType.generated.h"

UENUM(BlueprintType)
enum class ELevelBadgeType : uint8 {
    Main,
    Bonus,
    Remix,
    Void,
    Count,
    None,
};

