#pragma once
#include "CoreMinimal.h"
#include "CustomEvent.h"
#include "ReceivedSessionInviteEvent.generated.h"

UCLASS(Blueprintable)
class UReceivedSessionInviteEvent : public UCustomEvent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString hostId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString isSessionCrossplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString isPlayerCrossplay;
    
public:
    UReceivedSessionInviteEvent();

};

