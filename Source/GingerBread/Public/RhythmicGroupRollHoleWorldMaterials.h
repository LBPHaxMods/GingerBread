#pragma once
#include "CoreMinimal.h"
#include "RhythmicGroupRollHoleWorldMaterials.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FRhythmicGroupRollHoleWorldMaterials {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> CardboardMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> ThreadMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> ArchMaterial;
    
    GINGERBREAD_API FRhythmicGroupRollHoleWorldMaterials();
};

