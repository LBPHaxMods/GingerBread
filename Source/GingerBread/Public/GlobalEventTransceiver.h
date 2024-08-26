#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TransceiverEventDelegate.h"
#include "GlobalEventTransceiver.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGlobalEventTransceiver : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransceiverEvent EventReceived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TransmitterTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ReceiverTag;
    
    UGlobalEventTransceiver(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TransmitEvent();
    
};

