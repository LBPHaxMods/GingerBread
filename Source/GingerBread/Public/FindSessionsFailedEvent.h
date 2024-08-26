#pragma once
#include "CoreMinimal.h"
#include "CustomEvent.h"
#include "FindSessionsFailedEvent.generated.h"

UCLASS(Blueprintable)
class UFindSessionsFailedEvent : public UCustomEvent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerId;
    
public:
    UFindSessionsFailedEvent();

};

