#pragma once
#include "CoreMinimal.h"
#include "CPE_CollectabellSaveData.generated.h"

USTRUCT(BlueprintType)
struct FCPE_CollectabellSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CollectabellsStored;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalCollectabellsCollected;
    
    GINGERBREAD_API FCPE_CollectabellSaveData();
};

