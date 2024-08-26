#pragma once
#include "CoreMinimal.h"
#include "SplineIndexMapping.generated.h"

class ASackboy;

USTRUCT(BlueprintType)
struct FSplineIndexMapping {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASackboy> Sackboy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 splineIndex;
    
    GINGERBREAD_API FSplineIndexMapping();
};

