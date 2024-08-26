#pragma once
#include "CoreMinimal.h"
#include "EAttackType.generated.h"

UENUM(BlueprintType)
enum class EAttackType : uint8 {
    Normal,
    Super,
    Coordinated,
    Ranged,
    SpaceHamster,
};

