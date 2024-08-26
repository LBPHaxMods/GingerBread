#pragma once
#include "CoreMinimal.h"
#include "CollectabellSaveData.generated.h"

USTRUCT(BlueprintType)
struct FCollectabellSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CollectabellsStored;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalCollectabellsCollected;
    
    GINGERBREAD_API FCollectabellSaveData();
};

