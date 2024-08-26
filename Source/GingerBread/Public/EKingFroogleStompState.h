#pragma once
#include "CoreMinimal.h"
#include "EKingFroogleStompState.generated.h"

UENUM(BlueprintType)
enum class EKingFroogleStompState : uint8 {
    Invalid,
    Stomp,
    BetweenStomps,
    PostStomps,
    NumStates,
};

