#pragma once
#include "CoreMinimal.h"
#include "EAdminPhaseState.generated.h"

UENUM(BlueprintType)
enum class EAdminPhaseState : uint8 {
    DEFAULT,
    BEGIN_ADMIN,
    EYE_FADE_IN,
    EYE_IDLE,
    EYE_FADE_OUT,
    EYE_HIT_REACT,
    EYE_ATTACK,
};

