#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "CritterSpawningUFOAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UCritterSpawningUFOAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnterIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnterOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ExitOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnterClose;
    
    UCritterSpawningUFOAnimInstance();

};

