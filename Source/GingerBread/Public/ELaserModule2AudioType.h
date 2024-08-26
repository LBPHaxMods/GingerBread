#pragma once
#include "CoreMinimal.h"
#include "ELaserModule2AudioType.generated.h"

UENUM(BlueprintType)
enum class ELaserModule2AudioType : uint8 {
    Static,
    BackAndForth,
    CircularRotation,
};

