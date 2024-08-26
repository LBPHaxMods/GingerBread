#pragma once
#include "CoreMinimal.h"
#include "PSNObjectID.h"
#include "ActivityZoneItem.generated.h"

USTRUCT(BlueprintType)
struct FActivityZoneItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPSNObjectID CollectMemoriesTaskID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CollectMemoriesValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPSNObjectID UnlockZoneTaskID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UnlockZoneValue;
    
    GINGERBREAD_API FActivityZoneItem();
};

