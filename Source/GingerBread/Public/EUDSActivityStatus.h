#pragma once
#include "CoreMinimal.h"
#include "EUDSActivityStatus.generated.h"

UENUM(BlueprintType)
enum class EUDSActivityStatus : uint8 {
    AS_Idle,
    AS_Started,
    AS_Success,
    AS_Failed,
    AS_Abandoned,
};

