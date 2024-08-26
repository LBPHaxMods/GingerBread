#pragma once
#include "CoreMinimal.h"
#include "WobbleBlobBaseMaterialArrayStruct.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FWobbleBlobBaseMaterialArrayStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> Materials;
    
    GINGERBREAD_API FWobbleBlobBaseMaterialArrayStruct();
};

