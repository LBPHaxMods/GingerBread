#pragma once
#include "CoreMinimal.h"
#include "UnlockableItemId.h"
#include "UnlockableItemType.h"
#include "UnlockableItemTag.generated.h"

USTRUCT(BlueprintType)
struct FUnlockableItemTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UnlockableItemType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnlockableItemId ID;
    
    GINGERBREAD_API FUnlockableItemTag();
};

