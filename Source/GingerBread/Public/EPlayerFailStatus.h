#pragma once
#include "CoreMinimal.h"
#include "EPlayerFailStatus.generated.h"

UENUM(BlueprintType)
enum class EPlayerFailStatus : uint8 {
    CorruptSave_RequestOverwrite,
    NoSpace_NotifyOnly,
    GameFull_NotifyOnly,
};

