#pragma once
#include "CoreMinimal.h"
#include "EventDetail.h"
#include "Event.generated.h"

class UEvent;

UCLASS(Blueprintable)
class GAMEANALYTICS_API UEvent : public UEventDetail {
    GENERATED_BODY()
public:
    UEvent();

    UFUNCTION(BlueprintCallable)
    static UEvent* NewEvent();
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
};

