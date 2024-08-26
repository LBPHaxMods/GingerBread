#pragma once
#include "CoreMinimal.h"
#include "EVexBarkReason.generated.h"

UENUM(BlueprintType)
enum class EVexBarkReason : uint8 {
    Invalid,
    FightStart,
    ThrowBomb,
    FistAttack,
    BombVortex,
    ThrowSingleRoller,
    ThrowMultipleRollers,
    FlamePanelOn,
    TakeHit,
    TakeHitFinished,
    TakePhasingHit,
    RageStart,
    RageEnd,
    ConveyorDirectionChange,
    JumpStart,
    JumpLand,
    ConveyorHeightChange,
    SackboyPickupBomb,
    SackboyDeath,
    SackboyRespawn,
    GameOver,
    NumStates,
};

