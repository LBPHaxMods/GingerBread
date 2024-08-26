#pragma once
#include "CoreMinimal.h"
#include "ESpikeyVineGroupCutType.generated.h"

UENUM(BlueprintType)
enum class ESpikeyVineGroupCutType : uint8 {
    Individual,
    Specified,
    CutAll,
};

