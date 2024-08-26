#pragma once
#include "CoreMinimal.h"
#include "RemoteNetworkSettings.h"
#include "TelemetrySettings.h"
#include "RemoteSettings.generated.h"

USTRUCT(BlueprintType)
struct FRemoteSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTelemetrySettings Telemetry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRemoteNetworkSettings Network;
    
    GINGERBREAD_API FRemoteSettings();
};

