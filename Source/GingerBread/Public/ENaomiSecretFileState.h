#pragma once
#include "CoreMinimal.h"
#include "ENaomiSecretFileState.generated.h"

UENUM(BlueprintType)
enum class ENaomiSecretFileState : uint8 {
    Invalid,
    Inactive,
    SpringingOut,
    AttachedToSlider,
    DamagedHitReaction,
    DestroyedHitReaction,
    Retract,
    NumStates,
};

