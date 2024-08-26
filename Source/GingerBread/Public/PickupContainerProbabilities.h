#pragma once
#include "CoreMinimal.h"
#include "PickupContainerProbabilities.generated.h"

USTRUCT(BlueprintType)
struct FPickupContainerProbabilities {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Boosted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DoublePercentage;
    
    GINGERBREAD_API FPickupContainerProbabilities();
};

