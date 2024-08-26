#pragma once
#include "CoreMinimal.h"
#include "VoidSelectObjectUnlockStateDelegate.h"
#include "VoidSelectUnlockDataBase.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FVoidSelectUnlockDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoidSelectObjectUnlockState StateCheckFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> CustomIcon;
    
    GINGERBREAD_API FVoidSelectUnlockDataBase();
};

