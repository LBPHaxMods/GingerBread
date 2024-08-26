#pragma once
#include "CoreMinimal.h"
#include "NaomiHandServerPunchData.generated.h"

USTRUCT(BlueprintType)
struct FNaomiHandServerPunchData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentRequestTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDoingAPunch;
    
    GINGERBREAD_API FNaomiHandServerPunchData();
};

