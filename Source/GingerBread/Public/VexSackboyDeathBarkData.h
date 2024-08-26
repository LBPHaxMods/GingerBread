#pragma once
#include "CoreMinimal.h"
#include "VexBark.h"
#include "VexSackboyDeathBarkData.generated.h"

USTRUCT(BlueprintType)
struct FVexSackboyDeathBarkData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVexBark> SackboyDeathBarks;
    
    GINGERBREAD_API FVexSackboyDeathBarkData();
};

