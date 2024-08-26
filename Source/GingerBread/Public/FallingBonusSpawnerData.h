#pragma once
#include "CoreMinimal.h"
#include "EBonusRoomDensity.h"
#include "FallingBonusSpawnerData.generated.h"

USTRUCT(BlueprintType)
struct FFallingBonusSpawnerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBonusRoomDensity, float> SmallBellSpawnRates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBonusRoomDensity, int32> SmallSpawnerMaxActiveBells;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBonusRoomDensity, float> LargeBellSpawnRates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBonusRoomDensity, int32> LargeSpawnerMaxActiveBells;
    
    GINGERBREAD_API FFallingBonusSpawnerData();
};

