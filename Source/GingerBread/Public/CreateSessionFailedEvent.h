#pragma once
#include "CoreMinimal.h"
#include "CustomEvent.h"
#include "CreateSessionFailedEvent.generated.h"

UCLASS(Blueprintable)
class UCreateSessionFailedEvent : public UCustomEvent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerId;
    
public:
    UCreateSessionFailedEvent();

};

