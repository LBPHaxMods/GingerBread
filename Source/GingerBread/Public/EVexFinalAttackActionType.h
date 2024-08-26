#pragma once
#include "CoreMinimal.h"
#include "EVexFinalAttackActionType.generated.h"

UENUM(BlueprintType)
enum class EVexFinalAttackActionType : uint8 {
    Invalid,
    VanishMove,
    Reveal,
    FistAttack,
    SplatAttack,
    Transform_Turrets,
    Transform_Duopedes,
    Transform_Darts,
    ItemAttack,
    Trickster,
    BombSpamAttack,
    BreakFloor,
    BreakWall,
    DelayedTileShuffle,
};

