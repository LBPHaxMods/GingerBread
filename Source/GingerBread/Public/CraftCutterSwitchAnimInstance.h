#pragma once
#include "CoreMinimal.h"
#include "LevelObjectAnimInstance.h"
#include "CraftCutterSwitchAnimInstance.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, NonTransient)
class UCraftCutterSwitchAnimInstance : public ULevelObjectAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Active;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* PipeHitMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditiveBlendWeight;
    
public:
    UCraftCutterSwitchAnimInstance();

};

