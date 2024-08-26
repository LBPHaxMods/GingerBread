#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EBoomerangAnimState.h"
#include "BoomerangAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UBoomerangAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBoomerangAnimState AnimState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnterSmallState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ExitSmallState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnterLargeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ExitLargeState;
    
public:
    UBoomerangAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetState(EBoomerangAnimState State);
    
};

