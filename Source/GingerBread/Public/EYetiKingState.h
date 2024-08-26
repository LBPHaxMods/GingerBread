#pragma once
#include "CoreMinimal.h"
#include "EYetiKingState.generated.h"

UENUM(BlueprintType)
enum class EYetiKingState : uint8 {
    Idle,
    Rolling,
    Falling,
    Finished,
};

