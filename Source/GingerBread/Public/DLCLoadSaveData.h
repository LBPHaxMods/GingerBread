#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FreeProductRecord.h"
#include "PSNProductId.h"
#include "DLCLoadSaveData.generated.h"

USTRUCT(BlueprintType)
struct FDLCLoadSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FPSNProductId> ShoppingCart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFreeProductRecord> FreeProducts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastPromotionsTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> TournamentsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime LastTournamentsTimestamp;
    
    GINGERBREAD_API FDLCLoadSaveData();
};

