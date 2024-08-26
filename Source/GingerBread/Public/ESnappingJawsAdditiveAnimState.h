#pragma once
#include "CoreMinimal.h"
#include "ESnappingJawsAdditiveAnimState.generated.h"

UENUM(BlueprintType)
enum class ESnappingJawsAdditiveAnimState : uint8 {
    NoAnim,
    Hit,
    NumStates,
};

