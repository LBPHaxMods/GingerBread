#pragma once
#include "CoreMinimal.h"
#include "PumpPadMaterials.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FPumpPadMaterials {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> BodyMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> ThreadMaterial;
    
    GINGERBREAD_API FPumpPadMaterials();
};

