#pragma once
#include "CoreMinimal.h"
#include "EESportsBogieBoiState.generated.h"

UENUM()
enum class EESportsBogieBoiState : int32 {
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

