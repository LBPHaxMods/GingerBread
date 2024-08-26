#pragma once
#include "CoreMinimal.h"
#include "ZipLineMaterialArrayStruct.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FZipLineMaterialArrayStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> Materials;
    
    GINGERBREAD_API FZipLineMaterialArrayStruct();
};

