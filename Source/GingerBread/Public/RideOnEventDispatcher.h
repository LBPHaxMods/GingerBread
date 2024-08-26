#pragma once
#include "CoreMinimal.h"
#include "RideOnEvent.h"
#include "RideOnEventDispatcher.generated.h"

class UGlobalEventTransceiver;

UCLASS(Blueprintable)
class ARideOnEventDispatcher : public ARideOnEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGlobalEventTransceiver* GlobalEventTransceiver;
    
    ARideOnEventDispatcher(const FObjectInitializer& ObjectInitializer);

};

