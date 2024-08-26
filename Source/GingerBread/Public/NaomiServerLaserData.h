#pragma once
#include "CoreMinimal.h"
#include "NaomiServerLaserData.generated.h"

USTRUCT(BlueprintType)
struct FNaomiServerLaserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentRequestTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLaserActive;
    
    GINGERBREAD_API FNaomiServerLaserData();
};

