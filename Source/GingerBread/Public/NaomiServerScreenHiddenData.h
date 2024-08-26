#pragma once
#include "CoreMinimal.h"
#include "NaomiServerScreenHiddenData.generated.h"

USTRUCT(BlueprintType)
struct FNaomiServerScreenHiddenData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLeftScreenHidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRightScreenHidden;
    
    GINGERBREAD_API FNaomiServerScreenHiddenData();
};

