#pragma once
#include "CoreMinimal.h"
#include "ESackboyLaunchVectorType.generated.h"

UENUM(BlueprintType)
enum class ESackboyLaunchVectorType : uint8 {
    AsForce,
    AsImpulse,
    AsAcceleration,
    AsVelocity,
};

