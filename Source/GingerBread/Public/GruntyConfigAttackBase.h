#pragma once
#include "CoreMinimal.h"
#include "AIConfigBase.h"
#include "GruntyConfigAttackBase.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=GruntyAttack)
class UGruntyConfigAttackBase : public UAIConfigBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BasicAttackMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShieldMaxAttackAngle;
    
    UGruntyConfigAttackBase();

};

