#pragma once
#include "CoreMinimal.h"
#include "TreasurePodMaterials.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FTreasurePodMaterials {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> ThreadMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> BaseMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> EggMaterial;
    
    GINGERBREAD_API FTreasurePodMaterials();
};

