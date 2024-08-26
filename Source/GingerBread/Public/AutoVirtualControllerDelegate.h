#pragma once
#include "CoreMinimal.h"
#include "VirtualControllerActionFinishedEventDelegate.h"
#include "AutoVirtualControllerDelegate.generated.h"

USTRUCT(BlueprintType)
struct FAutoVirtualControllerDelegate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVirtualControllerActionFinishedEvent OnFinishedEvent;
    
    GINGERBREAD_API FAutoVirtualControllerDelegate();
};

