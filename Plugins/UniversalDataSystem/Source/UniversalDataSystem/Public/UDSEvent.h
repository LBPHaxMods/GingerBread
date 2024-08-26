#pragma once
#include "CoreMinimal.h"
#include "UDSEventName.h"
#include "UDSEvent.generated.h"

USTRUCT(BlueprintType)
struct FUDSEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUDSEventName EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> Properties;
    
    UNIVERSALDATASYSTEM_API FUDSEvent();
};

