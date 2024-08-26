#pragma once
#include "CoreMinimal.h"
#include "MaterialParamIndices.generated.h"

USTRUCT(BlueprintType)
struct FMaterialParamIndices {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ParamIndex;
    
    GINGERBREAD_API FMaterialParamIndices();
};

