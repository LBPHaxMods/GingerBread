#pragma once
#include "CoreMinimal.h"
#include "EDepthOfFieldBehaviour.generated.h"

UENUM(BlueprintType)
namespace EDepthOfFieldBehaviour {
    enum Type {
        NoAutoDof,
        ScaledDof,
        CalculatedDof,
        CineDof,
    };
}

