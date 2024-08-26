#pragma once
#include "CoreMinimal.h"
#include "EVexFinalAttackType.generated.h"

UENUM(BlueprintType)
enum class EVexFinalAttackType : uint8 {
    Invalid,
    FistAttack,
    SplatAttack,
    ProjectileSalvo,
    CraftCutter,
    Item,
    MakeAMove,
    TricksterMove,
    Transformation,
};

