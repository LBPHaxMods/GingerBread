#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "LevelCollectabellReward.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FLevelCollectabellReward : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
    GINGERBREAD_API FLevelCollectabellReward();
};

