#pragma once
#include "CoreMinimal.h"
#include "ETournamentStatus.generated.h"

UENUM(BlueprintType)
enum class ETournamentStatus : uint8 {
    None,
    Waiting,
    Active,
    Finished,
};

