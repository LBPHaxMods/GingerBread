#pragma once
#include "CoreMinimal.h"
#include "TelemetryId.generated.h"

USTRUCT(BlueprintType)
struct FTelemetryId {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 accountId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LocalId;
    
    GINGERBREAD_API FTelemetryId();
};

