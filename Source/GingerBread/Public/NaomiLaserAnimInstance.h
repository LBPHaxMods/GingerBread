#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "NaomiLaserAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class GINGERBREAD_API UNaomiLaserAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnterUnfoldState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnterShootState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnterFoldState;
    
    UNaomiLaserAnimInstance();

};

