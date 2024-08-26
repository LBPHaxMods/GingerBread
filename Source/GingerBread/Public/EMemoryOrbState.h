#pragma once
#include "CoreMinimal.h"
#include "EMemoryOrbState.generated.h"

UENUM()
enum class EMemoryOrbState : int32 {
    Idle,
    BeingCollected,
    CollectionConfirmed,
    Collected,
};

