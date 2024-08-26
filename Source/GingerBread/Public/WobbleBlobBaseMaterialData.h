#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WobbleBlobBaseMaterialArrayStruct.h"
#include "WobbleBlobBaseMaterialData.generated.h"

USTRUCT(BlueprintType)
struct FWobbleBlobBaseMaterialData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWobbleBlobBaseMaterialArrayStruct BaseMeshMaterialsArray;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FWobbleBlobBaseMaterialArrayStruct WobbleBlobMeshMaterialsArray[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FirstMaterialAlbedoTint;
    
    GINGERBREAD_API FWobbleBlobBaseMaterialData();
};

