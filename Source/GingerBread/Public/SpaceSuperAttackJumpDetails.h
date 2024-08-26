#pragma once
#include "CoreMinimal.h"
#include "SpaceSuperAttackJumpDetails.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FSpaceSuperAttackJumpDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName JumpAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* JumpZCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoosterEnableDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnToTargetEnableDelay;
    
    GINGERBREAD_API FSpaceSuperAttackJumpDetails();
};

