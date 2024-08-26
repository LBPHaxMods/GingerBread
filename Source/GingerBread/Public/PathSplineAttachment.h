#pragma once
#include "CoreMinimal.h"
#include "PathSplineAttachment.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPathSplineAttachment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Spline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SplineKey;
    
    GINGERBREAD_API FPathSplineAttachment();
};

