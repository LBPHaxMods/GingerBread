#pragma once
#include "CoreMinimal.h"
#include "AIConfigBase.h"
#include "FroogleConfigAOEUndersea.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=FroogleAOEUndersea)
class UFroogleConfigAOEUndersea : public UAIConfigBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AOELifespan;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeightScaleFactor;
    
    UFroogleConfigAOEUndersea();

};

