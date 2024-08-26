#pragma once
#include "CoreMinimal.h"
#include "EEmittedActorUsage.generated.h"

UENUM(BlueprintType)
enum class EEmittedActorUsage : uint8 {
    Local,
    Networked,
};

