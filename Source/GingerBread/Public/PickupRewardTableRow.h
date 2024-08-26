#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PickupRewardTableRow.generated.h"

USTRUCT(BlueprintType)
struct FPickupRewardTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanEverSpawnLife;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AwardScoreAsBubbles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumCollectabells;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollectabellSpawnProbabilty;
    
    GINGERBREAD_API FPickupRewardTableRow();
};

