#pragma once
#include "CoreMinimal.h"
#include "EWAMMoleState.generated.h"

UENUM(BlueprintType)
namespace EWAMMoleState {
    enum Type {
        Underground,
        IdleAboveGround,
        Celebrate,
        PresentPrize,
        Burrow,
        BurrowFaster,
        Disabled,
        Worship,
        StealPrize,
        Surprised,
    };
}

