#pragma once
#include "CoreMinimal.h"
#include "AIConfigBase.h"
#include "DetectionConfig.h"
#include "EAlertState.h"
#include "EAttackType.h"
#include "MeanieConfigFightBase.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=MeanieFight)
class UMeanieConfigFightBase : public UAIConfigBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAlertState, FDetectionConfig> DetectionConfigs;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MaintainPreviousTargets;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AlwaysInDistance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AlwaysInFront;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SixthSenseRange;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAttackType, float> AttackRanges;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DesiredHookPointDistance;
    
    UMeanieConfigFightBase();

};

