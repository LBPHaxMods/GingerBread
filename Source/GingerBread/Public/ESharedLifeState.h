#pragma once
#include "CoreMinimal.h"
#include "ESharedLifeState.generated.h"

UENUM(BlueprintType)
enum ESharedLifeState {
    Depleted,
    Full,
    SharedLifeState_MAX UMETA(Hidden),
};

