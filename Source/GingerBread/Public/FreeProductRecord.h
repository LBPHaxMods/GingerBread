#pragma once
#include "CoreMinimal.h"
#include "FreeProductStatus.h"
#include "PSNProductId.h"
#include "FreeProductRecord.generated.h"

USTRUCT(BlueprintType)
struct FFreeProductRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPSNProductId ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FreeProductStatus Status;
    
    GINGERBREAD_API FFreeProductRecord();
};

