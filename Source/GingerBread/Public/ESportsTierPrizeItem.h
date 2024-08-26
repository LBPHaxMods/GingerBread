#pragma once
#include "CoreMinimal.h"
#include "ESportsTierPrizeItem.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FESportsTierPrizeItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftObjectPtr<UTexture2D>> PrizeTextureSoft;
    
    GINGERBREAD_API FESportsTierPrizeItem();
};

