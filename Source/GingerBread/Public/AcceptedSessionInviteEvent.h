#pragma once
#include "CoreMinimal.h"
#include "CustomEvent.h"
#include "AcceptedSessionInviteEvent.generated.h"

UCLASS(Blueprintable)
class UAcceptedSessionInviteEvent : public UCustomEvent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString hostId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString hostName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString isSessionCrossplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString isPlayerCrossplay;
    
public:
    UAcceptedSessionInviteEvent();

};

