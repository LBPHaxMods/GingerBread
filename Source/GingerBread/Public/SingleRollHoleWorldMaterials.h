#pragma once
#include "CoreMinimal.h"
#include "SingleRollHoleWorldMaterials.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FSingleRollHoleWorldMaterials {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> DoorCardboardMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> PortalCardboardMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> ThreadMaterial;
    
    GINGERBREAD_API FSingleRollHoleWorldMaterials();
};

