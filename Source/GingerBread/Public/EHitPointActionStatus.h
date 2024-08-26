#pragma once
#include "CoreMinimal.h"
#include "EHitPointActionStatus.generated.h"

UENUM(BlueprintType)
enum class EHitPointActionStatus : uint8 {
    ActionPending,
    ActionedOnServer,
    ActioningOnClient,
    ActionedOnClient,
};

