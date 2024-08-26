#pragma once
#include "CoreMinimal.h"
#include "ECannonActivationTrigger.generated.h"

UENUM(BlueprintType)
enum class ECannonActivationTrigger : uint8 {
    Collider,
    ButtonPress,
};

