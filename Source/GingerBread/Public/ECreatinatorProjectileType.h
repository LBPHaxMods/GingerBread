#pragma once
#include "CoreMinimal.h"
#include "ECreatinatorProjectileType.generated.h"

UENUM(BlueprintType)
enum class ECreatinatorProjectileType : uint8 {
    Pooled,
    Active,
    Timeout,
};

