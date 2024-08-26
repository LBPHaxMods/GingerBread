#pragma once
#include "CoreMinimal.h"
#include "EMiniSequenceState.generated.h"

UENUM(BlueprintType)
enum class EMiniSequenceState : uint8 {
    Disabled,
    Unplayed,
    Playing,
    Played,
};

