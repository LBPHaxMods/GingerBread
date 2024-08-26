#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EGrabAbortReason.h"
#include "ESackboyActivity.h"
#include "grabbable.generated.h"

class ASackboy;
class UPrimitiveComponent;

UINTERFACE(Blueprintable)
class GINGERBREAD_API Ugrabbable : public UInterface {
    GENERATED_BODY()
};

class GINGERBREAD_API Igrabbable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReleased(ASackboy* grabber, UPrimitiveComponent* grabbedComponent, ESackboyActivity grabActivity, EGrabAbortReason abortReason);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGrabbed(ASackboy* grabber, UPrimitiveComponent* grabbedComponent, ESackboyActivity grabActivity);
    
};

