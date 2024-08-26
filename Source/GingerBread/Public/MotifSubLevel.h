#pragma once
#include "CoreMinimal.h"
#include "MotifSubLevel.generated.h"

USTRUCT(BlueprintType)
struct FMotifSubLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Levels;
    
    GINGERBREAD_API FMotifSubLevel();
};

