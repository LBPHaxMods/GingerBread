#pragma once
#include "CoreMinimal.h"
#include "CameraAreaSyncSettings.generated.h"

USTRUCT(BlueprintType)
struct FCameraAreaSyncSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSynced: 1;
    
    GINGERBREAD_API FCameraAreaSyncSettings();
};

