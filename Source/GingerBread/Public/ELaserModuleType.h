#pragma once
#include "CoreMinimal.h"
#include "ELaserModuleType.generated.h"

UENUM(BlueprintType)
enum class ELaserModuleType : uint8 {
    LineTracedLaser,
    BasicLaser,
};

