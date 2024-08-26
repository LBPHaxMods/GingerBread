#pragma once
#include "CoreMinimal.h"
#include "SniperThrowNeedleComponent.h"
#include "SniperSpaceThrowNeedleComponent.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USniperSpaceThrowNeedleComponent : public USniperThrowNeedleComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirDashTriggerRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirDashMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AirDashSpeedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirDashReleaseNeedleDelay;
    
    USniperSpaceThrowNeedleComponent(const FObjectInitializer& ObjectInitializer);

};

