#pragma once
#include "CoreMinimal.h"
#include "VexThrowDoubleProjectile.generated.h"

USTRUCT(BlueprintType)
struct FVexThrowDoubleProjectile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> ThrowDouble;
    
    GINGERBREAD_API FVexThrowDoubleProjectile();
};

