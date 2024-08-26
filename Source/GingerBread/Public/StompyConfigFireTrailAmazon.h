#pragma once
#include "CoreMinimal.h"
#include "AIConfigBase.h"
#include "StompyConfigFireTrailAmazon.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=StompyFireTrail)
class UStompyConfigFireTrailAmazon : public UAIConfigBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeSpan;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenAOESpawns;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PredictAheadSeconds;
    
    UStompyConfigFireTrailAmazon();

};

