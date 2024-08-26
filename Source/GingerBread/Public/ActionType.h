#pragma once
#include "CoreMinimal.h"
#include "ActionType.generated.h"

USTRUCT(BlueprintType)
struct FActionType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText holdText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText pressText;
    
    GINGERBREAD_API FActionType();
};

