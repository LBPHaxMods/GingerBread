#pragma once
#include "CoreMinimal.h"
#include "ShatteredOrbGroup.generated.h"

USTRUCT(BlueprintType)
struct FShatteredOrbGroup {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 TotalCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 CollectedCount;
    
    GINGERBREAD_API FShatteredOrbGroup();
};

