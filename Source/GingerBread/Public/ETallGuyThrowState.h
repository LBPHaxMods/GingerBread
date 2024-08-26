#pragma once
#include "CoreMinimal.h"
#include "ETallGuyThrowState.generated.h"

UENUM(BlueprintType)
enum class ETallGuyThrowState : uint8 {
    Invalid,
    Preparing,
    Throwing,
    NumStates,
};

