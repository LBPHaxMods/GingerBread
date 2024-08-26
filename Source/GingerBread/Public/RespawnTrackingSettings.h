#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RespawnTrackingSettings.generated.h"

USTRUCT(BlueprintType)
struct FRespawnTrackingSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WorldTargetOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreferedHorizontalOffset;
    
    GINGERBREAD_API FRespawnTrackingSettings();
};

