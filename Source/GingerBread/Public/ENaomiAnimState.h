#pragma once
#include "CoreMinimal.h"
#include "ENaomiAnimState.generated.h"

UENUM(BlueprintType)
enum class ENaomiAnimState : uint8 {
    Invalid,
    Idle,
    StartAdminMode,
    FinishAdminMode,
    Enraged,
    ShortCircuit,
    Laser,
    NormalPunch,
    ChargedPunch,
    ScreenDestroyed,
    Defeated,
};

