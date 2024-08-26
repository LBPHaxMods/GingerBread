#pragma once
#include "CoreMinimal.h"
#include "UnlockableItemType.h"
#include "UnlockableItemMetadataTag.generated.h"

USTRUCT(BlueprintType)
struct FUnlockableItemMetadataTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UnlockableItemType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    GINGERBREAD_API FUnlockableItemMetadataTag();
};

