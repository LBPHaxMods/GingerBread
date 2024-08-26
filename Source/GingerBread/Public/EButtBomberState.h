#pragma once
#include "CoreMinimal.h"
#include "EButtBomberState.generated.h"

UENUM(BlueprintType)
enum class EButtBomberState : uint8 {
    Idle,
    Alert,
    Chase,
    Attack,
    Stuck,
    HitReact,
    Stomp,
    StompConfirmed,
    Targetting,
    Bump,
    Bored,
};

