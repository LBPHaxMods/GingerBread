#pragma once
#include "CoreMinimal.h"
#include "CostumeUnlockState.generated.h"

USTRUCT(BlueprintType)
struct FCostumeUnlockState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Unlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Known;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool New;
    
    GINGERBREAD_API FCostumeUnlockState();
};

