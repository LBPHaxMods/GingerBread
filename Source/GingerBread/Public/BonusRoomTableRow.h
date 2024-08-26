#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FallingBonusSpawnerData.h"
#include "ScrollingBonusSpawnerData.h"
#include "BonusRoomTableRow.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FBonusRoomTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GameTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumSimultaneousPrizes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFallingBonusSpawnerData FallingSpawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScrollingBonusSpawnerData ScrollingSpawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LargePrizeSpawnMaxFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PrizeSpawnFrequencyCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LargePrizeSpawnMaxProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PrizeSpawnProbabilityCurve;
    
    GINGERBREAD_API FBonusRoomTableRow();
};

