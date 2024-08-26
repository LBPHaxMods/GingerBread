#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FuzzMaterialSubstitutionEntry.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct GINGERSHADERS_API FFuzzMaterialSubstitutionEntry : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MeshMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* FuzzMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* FuzzMaskedMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Length;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Threshold;
    
    FFuzzMaterialSubstitutionEntry();
};

