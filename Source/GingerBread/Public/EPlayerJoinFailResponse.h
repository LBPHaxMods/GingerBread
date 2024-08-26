#pragma once
#include "CoreMinimal.h"
#include "EPlayerJoinFailResponse.generated.h"

UENUM(BlueprintType)
enum class EPlayerJoinFailResponse : uint8 {
    OverwriteExistingData,
    Retry,
    Fail,
};

