#pragma once
#include "CoreMinimal.h"
#include "SoftMaterialIndexPair.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FSoftMaterialIndexPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    GINGERBREAD_API FSoftMaterialIndexPair();
};

