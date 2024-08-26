#pragma once
#include "CoreMinimal.h"
#include "UDSEventName.generated.h"

USTRUCT(BlueprintType)
struct FUDSEventName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    UNIVERSALDATASYSTEM_API FUDSEventName();
};

