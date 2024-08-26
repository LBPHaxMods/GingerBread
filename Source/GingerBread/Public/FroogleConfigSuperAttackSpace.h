#pragma once
#include "CoreMinimal.h"
#include "FroogleConfigSuperAttackBase.h"
#include "FroogleConfigSuperAttackSpace.generated.h"

UCLASS(Blueprintable, Config=Engine)
class UFroogleConfigSuperAttackSpace : public UFroogleConfigSuperAttackBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitiateAttackRange;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToReachTarget;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToReachTargetDeviation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BrakingDistance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationRateWhileJumping;
    
    UFroogleConfigSuperAttackSpace();

};

