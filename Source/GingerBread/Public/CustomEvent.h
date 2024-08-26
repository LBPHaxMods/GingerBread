#pragma once
#include "CoreMinimal.h"
#include "GingerbreadEventDetail.h"
#include "CustomEvent.generated.h"

UCLASS(Blueprintable)
class UCustomEvent : public UGingerbreadEventDetail {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString event_type;
    
public:
    UCustomEvent();

};

