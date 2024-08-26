#pragma once
#include "CoreMinimal.h"
#include "ReceptacleDataStoreInfo.generated.h"

USTRUCT(BlueprintType)
struct FReceptacleDataStoreInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseDataStore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DataStoreName;
    
    GINGERBREAD_API FReceptacleDataStoreInfo();
};

