#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WobbleBlobMaterialArrayStruct.h"
#include "WobbleBlobVertexAnimMaterials.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FWobbleBlobVertexAnimMaterials {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> BaseMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FirstMaterialAlbedoTint;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FWobbleBlobMaterialArrayStruct BlobMaterialsArray[4];
    
    GINGERBREAD_API FWobbleBlobVertexAnimMaterials();
};

