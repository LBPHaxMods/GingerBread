#pragma once
#include "CoreMinimal.h"
#include "AIActionData.generated.h"

USTRUCT(BlueprintType)
struct FAIActionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActionTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NewAction;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 NewActionIndex;
    
    GINGERBREAD_API FAIActionData();
};

