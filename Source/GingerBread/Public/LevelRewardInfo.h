#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELevelRewardType.h"
#include "LevelRewardInfo.generated.h"

USTRUCT(BlueprintType)
struct FLevelRewardInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELevelRewardType RewardType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle RewardData;
    
    GINGERBREAD_API FLevelRewardInfo();
};

