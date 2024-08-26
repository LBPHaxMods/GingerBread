#pragma once
#include "CoreMinimal.h"
#include "EBogieBoiState.generated.h"

UENUM()
enum class EBogieBoiState : int32 {
    Peeping,
    Hiding,
    PoppedOut,
    Launching,
    BashedDown,
    Shooting,
    Dizzy,
    Screwing,
    GotHit,
};

