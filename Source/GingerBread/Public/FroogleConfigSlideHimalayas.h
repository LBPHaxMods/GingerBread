#pragma once
#include "CoreMinimal.h"
#include "AIConfigBase.h"
#include "FroogleConfigSlideHimalayas.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=FroogleSlideHimalayas)
class UFroogleConfigSlideHimalayas : public UAIConfigBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostSlideDazeDuration;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSlideSpeed;
    
    UFroogleConfigSlideHimalayas();

};

