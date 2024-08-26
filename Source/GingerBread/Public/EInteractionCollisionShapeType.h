#pragma once
#include "CoreMinimal.h"
#include "EInteractionCollisionShapeType.generated.h"

UENUM(BlueprintType)
enum class EInteractionCollisionShapeType : uint8 {
    Sphere,
    Box,
    Capsule,
    Cone,
    None,
};

