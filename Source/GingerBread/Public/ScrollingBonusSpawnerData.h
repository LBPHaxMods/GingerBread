#pragma once
#include "CoreMinimal.h"
#include "EBonusRoomDensity.h"
#include "ScrollingBonusSpawnerData.generated.h"

USTRUCT(BlueprintType)
struct FScrollingBonusSpawnerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBonusRoomDensity, int32> SmallBellTrainSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBonusRoomDensity, float> SmallBellTrainFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBonusRoomDensity, int32> LargeBellTrainSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBonusRoomDensity, float> LargeBellTrainFrequency;
    
    GINGERBREAD_API FScrollingBonusSpawnerData();
};

