#pragma once
#include "CoreMinimal.h"
#include "CustomEvent.h"
#include "QuitSessionEvent.generated.h"

UCLASS(Blueprintable)
class UQuitSessionEvent : public UCustomEvent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString hostId;
    
public:
    UQuitSessionEvent();

};

