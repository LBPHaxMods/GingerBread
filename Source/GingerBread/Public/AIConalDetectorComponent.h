#pragma once
#include "CoreMinimal.h"
#include "AIDetectorComponent.h"
#include "DetectionConfig.h"
#include "EAlertState.h"
#include "AIConalDetectorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAIConalDetectorComponent : public UAIDetectorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAlertState, FDetectionConfig> DetectionConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MaintainPreviousTargets;
    
    UAIConalDetectorComponent(const FObjectInitializer& ObjectInitializer);

};

