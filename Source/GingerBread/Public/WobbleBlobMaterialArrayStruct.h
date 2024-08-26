#pragma once
#include "CoreMinimal.h"
#include "WobbleBlobMaterialArrayStruct.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FWobbleBlobMaterialArrayStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> Materials;
    
    GINGERBREAD_API FWobbleBlobMaterialArrayStruct();
};

