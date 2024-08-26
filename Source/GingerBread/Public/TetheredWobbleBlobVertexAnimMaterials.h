#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TetheredWobbleBlobVertexAnimMaterials.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FTetheredWobbleBlobVertexAnimMaterials {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FirstMaterialAlbedoTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> BlobMaterials;
    
    GINGERBREAD_API FTetheredWobbleBlobVertexAnimMaterials();
};

