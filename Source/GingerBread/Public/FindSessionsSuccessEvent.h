#pragma once
#include "CoreMinimal.h"
#include "CustomEvent.h"
#include "FindSessionsSuccessEvent.generated.h"

UCLASS(Blueprintable)
class UFindSessionsSuccessEvent : public UCustomEvent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 numSessions;
    
public:
    UFindSessionsSuccessEvent();

};

