#pragma once
#include "CoreMinimal.h"
#include "LevelObjectAnimInstance.h"
#include "ESportsCreatinatorTurretAnimInst.generated.h"

UCLASS(Blueprintable, NonTransient)
class UESportsCreatinatorTurretAnimInst : public ULevelObjectAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanEnterIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanEnterAnticipate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanEnterShooting;
    
public:
    UESportsCreatinatorTurretAnimInst();

};

