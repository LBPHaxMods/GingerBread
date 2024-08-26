#pragma once
#include "CoreMinimal.h"
#include "GruntysPerSackboys.generated.h"

USTRUCT(BlueprintType)
struct FGruntysPerSackboys {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> NumOfGruntysPerSackboys;
    
    GINGERBREAD_API FGruntysPerSackboys();
};

