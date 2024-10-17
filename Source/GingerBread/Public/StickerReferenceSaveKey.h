#pragma once
#include "CoreMinimal.h"
#include "StickerReferenceSaveKey.generated.h"

USTRUCT(BlueprintType)
struct FStickerReferenceSaveKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName KeyName;
    
    GINGERBREAD_API FStickerReferenceSaveKey();
};

// Define the GetTypeHash function for FStickerReferenceSaveKey
FORCEINLINE uint32 GetTypeHash(const FStickerReferenceSaveKey& StickerReferenceSaveKey)
{
    return GetTypeHash(StickerReferenceSaveKey.KeyName);
}