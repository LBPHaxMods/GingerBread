#pragma once
#include "CoreMinimal.h"
#include "VoidSelectUnlockDataBase.h"
#include "VoidSelectUnlockDataCostume.generated.h"

USTRUCT(BlueprintType)
struct FVoidSelectUnlockDataCostume : public FVoidSelectUnlockDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName costumeName;
    
    GINGERBREAD_API FVoidSelectUnlockDataCostume();
};

