#pragma once
#include "CoreMinimal.h"
#include "FreeProductRecord.h"
#include "PSNProductId.h"
#include "CPE_DLCLoadSaveData.generated.h"

USTRUCT(BlueprintType)
struct FCPE_DLCLoadSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FPSNProductId> ShoppingCart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFreeProductRecord> FreeProducts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastPromotionsTimestamp;
    
    GINGERBREAD_API FCPE_DLCLoadSaveData();
};

