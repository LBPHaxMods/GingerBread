#pragma once
#include "CoreMinimal.h"
#include "DefaultCostumePair.generated.h"

USTRUCT(BlueprintType)
struct FDefaultCostumePair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WithRegEyes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WithBigEyes;
    
    GINGERBREAD_API FDefaultCostumePair();
};

