#pragma once
#include "CoreMinimal.h"
#include "EObjectRespawnType.generated.h"

UENUM(BlueprintType)
enum class EObjectRespawnType : uint8 {
    ResetOrRespawn,
    ForceRespawn,
};

