#pragma once
#include "CoreMinimal.h"
#include "SlapExtenderMaterialSet.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FSlapExtenderMaterialSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> BaseMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> BaseWideMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* EndCapMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* SegmentMaterial;
    
    GINGERBREAD_API FSlapExtenderMaterialSet();
};

