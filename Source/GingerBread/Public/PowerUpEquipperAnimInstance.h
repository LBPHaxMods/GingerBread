#pragma once
#include "CoreMinimal.h"
#include "LevelObjectAnimInstance.h"
#include "PowerUpEquipperAnimInstance.generated.h"

class UAnimMontage;

UCLASS(Abstract, Blueprintable, NonTransient)
class UPowerUpEquipperAnimInstance : public ULevelObjectAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* RetractionMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ExpansionMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRetracted;
    
public:
    UPowerUpEquipperAnimInstance();

};

