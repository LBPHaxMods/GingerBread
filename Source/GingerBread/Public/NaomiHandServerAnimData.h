#pragma once
#include "CoreMinimal.h"
#include "ENaomiHandAnimState.h"
#include "NaomiHandServerAnimData.generated.h"

USTRUCT(BlueprintType)
struct FNaomiHandServerAnimData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ServerTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENaomiHandAnimState HandAnimState;
    
    GINGERBREAD_API FNaomiHandServerAnimData();
};

