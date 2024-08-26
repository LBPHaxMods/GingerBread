#pragma once
#include "CoreMinimal.h"
#include "PSNObjectID.h"
#include "ActivityVoidItem.generated.h"

USTRUCT(BlueprintType)
struct FActivityVoidItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPSNObjectID VoidTaskID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelID;
    
    GINGERBREAD_API FActivityVoidItem();
};

