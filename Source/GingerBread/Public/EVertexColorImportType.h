#pragma once
#include "CoreMinimal.h"
#include "EVertexColorImportType.generated.h"

UENUM(BlueprintType)
enum class EVertexColorImportType : uint8 {
    TakeNew,
    KeepOld,
    Override,
};

