#pragma once
#include "CoreMinimal.h"
#include "CustomEvent.h"
#include "CreateSessionSuccessEvent.generated.h"

UCLASS(Blueprintable)
class UCreateSessionSuccessEvent : public UCustomEvent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerId;
    
public:
    UCreateSessionSuccessEvent();

};

