#pragma once
#include "CoreMinimal.h"
#include "RideOnEvent.h"
#include "RideOnSpeedChangerEvent.generated.h"

UCLASS(Blueprintable)
class ARideOnSpeedChangerEvent : public ARideOnEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float targetSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float changeDuration;
    
    ARideOnSpeedChangerEvent(const FObjectInitializer& ObjectInitializer);

};

