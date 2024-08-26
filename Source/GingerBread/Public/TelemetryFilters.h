#pragma once
#include "CoreMinimal.h"
#include "TelemetryFilter.h"
#include "TelemetryFilters.generated.h"

USTRUCT(BlueprintType)
struct FTelemetryFilters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTelemetryFilter> Filters;
    
    GINGERBREAD_API FTelemetryFilters();
};

