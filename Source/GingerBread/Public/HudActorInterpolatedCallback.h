#pragma once
#include "CoreMinimal.h"
#include "HudActorCallbackDelegate.h"
#include "HudActorInterpolatedCallback.generated.h"

USTRUCT(BlueprintType)
struct FHudActorInterpolatedCallback {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHudActorCallback OnFinishedEvent;
    
    GINGERBREAD_API FHudActorInterpolatedCallback();
};

