#pragma once
#include "CoreMinimal.h"
#include "AIAnimInstance.h"
#include "EFlyingDuopedeSpeed.h"
#include "FlyingDuopedeSegmentAnimInst.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFlyingDuopedeSegmentAnimInst : public UAIAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsWalking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPickedUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSlapped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSquashed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsThrown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsBlasted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSynchronising;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRolledInto;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ThrownLand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFlyingDuopedeSpeed Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartPosition;
    
public:
    UFlyingDuopedeSegmentAnimInst();

    UFUNCTION(BlueprintCallable)
    void AnimNotify_OnThrownLand();
    
    UFUNCTION(BlueprintCallable)
    void AnimNotify_OnSynchronize();
    
    UFUNCTION(BlueprintCallable)
    void AnimNotify_OnDestroy();
    
};

