#pragma once
#include "CoreMinimal.h"
#include "PSNObjectID.h"
#include "ActivityBossFightItem.generated.h"

USTRUCT(BlueprintType)
struct FActivityBossFightItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPSNObjectID DefeatBossTaskID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelIdWhereBossLives;
    
    GINGERBREAD_API FActivityBossFightItem();
};

