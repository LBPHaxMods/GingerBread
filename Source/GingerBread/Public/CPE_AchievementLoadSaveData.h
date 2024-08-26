#pragma once
#include "CoreMinimal.h"
#include "AchievementGoldTierRecord.h"
#include "CPE_AchievementLoadSaveData.generated.h"

USTRUCT(BlueprintType)
struct FCPE_AchievementLoadSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> AchievementActionCountMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAchievementGoldTierRecord> GoldTierAwardedLevels;
    
    GINGERBREAD_API FCPE_AchievementLoadSaveData();
};

