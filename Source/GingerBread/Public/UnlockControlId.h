#pragma once
#include "CoreMinimal.h"
#include "UnlockControlId.generated.h"

USTRUCT(BlueprintType)
struct FUnlockControlId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RawId;
    
    GINGERBREAD_API FUnlockControlId();
};

// Define the GetTypeHash function for FPSNProductId
FORCEINLINE uint32 GetTypeHash(const FUnlockControlId& UnlockControlId)
{
    return GetTypeHash(UnlockControlId.RawId);
}