#pragma once
#include "CoreMinimal.h"
#include "TreasureItem.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FTreasureItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ItemThumbnail;
    
    GINGERBREAD_API FTreasureItem();
};

