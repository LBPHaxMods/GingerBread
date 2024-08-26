#pragma once
#include "CoreMinimal.h"
#include "ISoundfieldEndpoint.h"
#include "DualSenseSoundfieldEndpointSettings.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class WINDUALSENSE_API UDualSenseSoundfieldEndpointSettings : public USoundfieldEndpointSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ControllerIndex;
    
    UDualSenseSoundfieldEndpointSettings();

};

