#pragma once
#include "CoreMinimal.h"
#include "EMeanieMovementType.generated.h"

UENUM(BlueprintType)
enum class EMeanieMovementType : uint8 {
    Invalid,
    CleaveChase,
    CleaveAnticipation,
    Cleave,
    SlamChase,
    Slam,
    ReturnToCentreFight,
    ReturnToCentreIdle,
};

