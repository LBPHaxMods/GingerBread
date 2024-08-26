#pragma once
#include "CoreMinimal.h"
#include "UnlockControlId.h"
#include "UnlockType.h"
#include "UnlockControlTag.generated.h"

USTRUCT(BlueprintType)
struct FUnlockControlTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UnlockType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnlockControlId ID;
    
    GINGERBREAD_API FUnlockControlTag();
};

