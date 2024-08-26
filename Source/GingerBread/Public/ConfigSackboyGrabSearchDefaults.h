#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GrabSearchSettings.h"
#include "ConfigSackboyGrabSearchDefaults.generated.h"

UCLASS(Blueprintable, DefaultConfig, MinimalAPI, Config=SackboyGrabSearch)
class UConfigSackboyGrabSearchDefaults : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrabSearchSettings SearchConfigGrounded;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrabSearchSettings SearchConfigUngrounded;
    
    UConfigSackboyGrabSearchDefaults();

};

