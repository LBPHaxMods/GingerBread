#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "LevelRewardInfo.h"
#include "LevelRewardRow.generated.h"

USTRUCT(BlueprintType)
struct FLevelRewardRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelRewardInfo BronzeInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelRewardInfo SilverInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelRewardInfo GoldInfo;
    
    GINGERBREAD_API FLevelRewardRow();
};

