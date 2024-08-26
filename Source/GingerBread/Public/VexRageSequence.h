#pragma once
#include "CoreMinimal.h"
#include "EVexRageActions.h"
#include "VexRageSequence.generated.h"

USTRUCT(BlueprintType)
struct FVexRageSequence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EVexRageActions> Sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Durations;
    
    GINGERBREAD_API FVexRageSequence();
};

