#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "TransformData.generated.h"

USTRUCT(BlueprintType)
struct FTransformData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Transform", meta=(AllowPrivateAccess=true))
    FVector pos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Transform", meta=(AllowPrivateAccess=true))
    FVector Right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Transform", meta=(AllowPrivateAccess=true))
    FVector Up;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Transform", meta=(AllowPrivateAccess=true))
    FVector Scale;
};
