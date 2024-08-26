#pragma once
#include "CoreMinimal.h"
#include "EPhaseBombBabyState.generated.h"

UENUM(BlueprintType)
namespace EPhaseBombBabyState {
    enum Type {
        Idle,
        PickedUp,
        Thrown,
        SelfRighting,
        Jumping,
        IdleOpen,
        Count,
    };
}

