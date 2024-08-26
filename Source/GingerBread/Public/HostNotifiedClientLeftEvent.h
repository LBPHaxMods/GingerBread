#pragma once
#include "CoreMinimal.h"
#include "CustomEvent.h"
#include "HostNotifiedClientLeftEvent.generated.h"

UCLASS(Blueprintable)
class UHostNotifiedClientLeftEvent : public UCustomEvent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString hostId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ClientId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString clientLeftReason;
    
public:
    UHostNotifiedClientLeftEvent();

};

