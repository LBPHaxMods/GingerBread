#pragma once
#include "CoreMinimal.h"
#include "FrooglesPerSackboys.generated.h"

USTRUCT(BlueprintType)
struct FFrooglesPerSackboys {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> NumOfFrooglesPerSackboys;
    
    GINGERBREAD_API FFrooglesPerSackboys();
};

