#pragma once
#include "CoreMinimal.h"
#include "SoftMaterialIndexPair.h"
#include "SoftMaterialIndexPairArray.generated.h"

USTRUCT(BlueprintType)
struct FSoftMaterialIndexPairArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftMaterialIndexPair> Pairs;
    
    GINGERBREAD_API FSoftMaterialIndexPairArray();
};

