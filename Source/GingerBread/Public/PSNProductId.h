#pragma once
#include "CoreMinimal.h"
#include "PSNProductId.generated.h"

USTRUCT(BlueprintType)
struct FPSNProductId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RawId;
    
    GINGERBREAD_API FPSNProductId();
};

// Define the GetTypeHash function for FPSNProductId
FORCEINLINE uint32 GetTypeHash(const FPSNProductId& ProductId)
{
    return GetTypeHash(ProductId.RawId);
}
