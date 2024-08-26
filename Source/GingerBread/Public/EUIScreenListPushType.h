#pragma once
#include "CoreMinimal.h"
#include "EUIScreenListPushType.generated.h"

UENUM(BlueprintType)
enum class EUIScreenListPushType : uint8 {
    None,
    Whitelist,
    Blacklist,
};

