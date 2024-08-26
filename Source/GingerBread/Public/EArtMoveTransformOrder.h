#pragma once
#include "CoreMinimal.h"
#include "EArtMoveTransformOrder.generated.h"

UENUM(BlueprintType)
namespace EArtMoveTransformOrder {
    enum Type {
        Matrix_Spline,
        Spline_Matrix,
    };
}

