#pragma once
#include "CoreMinimal.h"
#include "ISoundfieldFormat.h"
#include "DualSenseSpatializationSettings.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class WINDUALSENSE_API UDualSenseSpatializationSettings : public USoundfieldEncodingSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Spread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PassThrough;
    
    UDualSenseSpatializationSettings();

};

