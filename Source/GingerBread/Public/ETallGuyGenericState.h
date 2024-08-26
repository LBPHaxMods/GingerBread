#pragma once
#include "CoreMinimal.h"
#include "ETallGuyGenericState.generated.h"

UENUM(BlueprintType)
enum class ETallGuyGenericState : uint8 {
    Invalid,
    Idle,
    Movement,
    TakeHit,
    ThrownBack,
    Death,
    NumStates,
};

