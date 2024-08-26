#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CustomBBKeySelector.generated.h"

class UBlackboardKeyType;

USTRUCT(BlueprintType)
struct FCustomBBKeySelector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName KeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBlackboardKeyType> KeyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 KeyID;
    
    GINGERBREAD_API FCustomBBKeySelector();
};

