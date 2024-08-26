#pragma once
#include "CoreMinimal.h"
#include "AIFlippedServerData.generated.h"

USTRUCT(BlueprintType)
struct FAIFlippedServerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ServerTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFlipped;
    
    GINGERBREAD_API FAIFlippedServerData();
};

