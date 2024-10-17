#pragma once
#include "CoreMinimal.h"
#include "UnlockableItemId.generated.h"

USTRUCT(BlueprintType)
struct FUnlockableItemId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RawId;
    
    GINGERBREAD_API FUnlockableItemId();
};


// Define the GetTypeHash function for FPSNProductId
FORCEINLINE uint32 GetTypeHash(const FUnlockableItemId& UnlockableItemId)
{
    return GetTypeHash(UnlockableItemId.RawId);
}