#pragma once
#include "CoreMinimal.h"
#include "ELaserModuleNaomiType.generated.h"

UENUM(BlueprintType)
enum class ELaserModuleNaomiType : uint8 {
    LineTracedLaser,
    BasicLaser,
};

