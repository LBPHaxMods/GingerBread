#pragma once
#include "CoreMinimal.h"
#include "EEndGameLogicType.generated.h"

UENUM(BlueprintType)
enum class EEndGameLogicType : uint8 {
    LoadLevel,
    Credits,
};

