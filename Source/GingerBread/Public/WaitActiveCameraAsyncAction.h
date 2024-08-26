#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "WaitActiveCameraActionFinishedDelegate.h"
#include "WaitActiveCameraAsyncAction.generated.h"

class UObject;
class UWaitActiveCameraAsyncAction;

UCLASS(Blueprintable)
class UWaitActiveCameraAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaitActiveCameraActionFinished OnFinished;
    
    UWaitActiveCameraAsyncAction();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UWaitActiveCameraAsyncAction* WaitActiveCamera(UObject* WorldContextObject);
    
};

