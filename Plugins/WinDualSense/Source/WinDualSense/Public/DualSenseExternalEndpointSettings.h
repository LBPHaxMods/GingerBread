#pragma once
#include "CoreMinimal.h"
#include "IAudioEndpoint.h"
#include "DualSenseExternalEndpointSettings.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class WINDUALSENSE_API UDualSenseExternalEndpointSettings : public UAudioEndpointSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ControllerIndex;
    
    UDualSenseExternalEndpointSettings();

};

