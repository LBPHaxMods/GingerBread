#pragma once
#include "CoreMinimal.h"
#include "EFishPlatformAction.h"
#include "FishPlatformState.generated.h"

USTRUCT(BlueprintType)
struct FFishPlatformState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentStopIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetStopIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFishPlatformAction CurrentAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLoopingForwards;
    
    GINGERBREAD_API FFishPlatformState();
};

