#pragma once
#include "CoreMinimal.h"
#include "EMusicMaterialEventParamMode.generated.h"

UENUM(BlueprintType)
namespace EMusicMaterialEventParamMode {
    enum Type {
        Step,
        Linear,
        SmoothStep,
        BellCurve,
    };
}

