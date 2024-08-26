#pragma once
#include "CoreMinimal.h"
#include "ETreasureKeeperState.generated.h"

UENUM()
enum class ETreasureKeeperState : int32 {
    Idle,
    Alerted,
    Running,
    Cowering,
    Jumping,
    Suiciding,
    Damaged,
    OpeningLid,
    ClosingLid,
    Escaping,
    Max,
};

