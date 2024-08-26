#pragma once
#include "CoreMinimal.h"
#include "EVexFinalLifeState.generated.h"

UENUM()
enum class EVexFinalLifeState : int32 {
    Falling,
    Landed,
    Collecting,
};

