#pragma once
#include "CoreMinimal.h"
#include "CachedFloats.generated.h"

USTRUCT(BlueprintType)
struct FCachedFloats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Floats;
    
    GINGERBREAD_API FCachedFloats();
};

