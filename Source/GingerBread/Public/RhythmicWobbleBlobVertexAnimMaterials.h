#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WobbleBlobMaterialArrayStruct.h"
#include "RhythmicWobbleBlobVertexAnimMaterials.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FRhythmicWobbleBlobVertexAnimMaterials {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> BaseMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FirstMaterialAlbedoTint;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FWobbleBlobMaterialArrayStruct BlobMaterialsArray[2];
    
    GINGERBREAD_API FRhythmicWobbleBlobVertexAnimMaterials();
};

