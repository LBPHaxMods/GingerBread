#pragma once
#include "CoreMinimal.h"
#include "ELevelDebugMenuRowType.generated.h"

UENUM(BlueprintType)
enum class ELevelDebugMenuRowType : uint8 {
    Header,
    EmptyPadding,
    CompletedInSinglePlayer,
    CompletedInMultiplayer,
    Aced,
    Score,
    Time,
    VoidEnergyCollected,
    Orb0,
    Orb1,
    Orb2,
    Orb3,
    Orb4,
    Count,
};

