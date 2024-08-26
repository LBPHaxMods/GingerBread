#pragma once
#include "CoreMinimal.h"
#include "AkMarkerTriggerCount.generated.h"

USTRUCT(BlueprintType)
struct FAkMarkerTriggerCount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MarkerLabel;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Count;
    
    GINGERBREAD_API FAkMarkerTriggerCount();
};

