#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PickupContainerProbabilities.h"
#include "PickupConditionTableRow.generated.h"

USTRUCT(BlueprintType)
struct FPickupConditionTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredNumberOfLives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickupContainerProbabilities AnyPickupsSpawnProbabilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPickupContainerProbabilities> SpawnAmountWeightings;
    
    GINGERBREAD_API FPickupConditionTableRow();
};

