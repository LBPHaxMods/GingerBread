#pragma once
#include "CoreMinimal.h"
#include "EVAEPlayMode.generated.h"

UENUM(BlueprintType)
namespace EVAEPlayMode {
    enum Type {
        ClipStart,
        ClipEnd,
        AtTimeForward,
        AtTimeReverse,
        AtTimeBoth,
    };
}

