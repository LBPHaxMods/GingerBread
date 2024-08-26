#pragma once
#include "CoreMinimal.h"
#include "EPatrollingCrabAdditiveAnimState.h"
#include "LevelObjectAnimInstance.h"
#include "PatrollingCrabAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UPatrollingCrabAnimInstance : public ULevelObjectAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DoTipAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanGetHit;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool moveLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MoveRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Idle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HitState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AtEndOfPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HitAdditiveState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditiveBlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditiveTransitionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditiveAnimationMinTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitAdditiveAnimationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasAdditiveAnimationFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasAdditiveAnimationExited;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPatrollingCrabAdditiveAnimState AdditiveAnimState;
    
public:
    UPatrollingCrabAnimInstance();

    UFUNCTION(BlueprintCallable)
    void StopMoving();
    
    UFUNCTION(BlueprintCallable)
    void StopAdditiveAnimation(EPatrollingCrabAdditiveAnimState AdditiveState);
    
    UFUNCTION(BlueprintCallable)
    void StartMoving(float NewSpeed, bool NewMoveLeft);
    
    UFUNCTION(BlueprintCallable)
    void PlayAdditiveAnimation(EPatrollingCrabAdditiveAnimState AdditiveState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndReached();
    
public:
    UFUNCTION(BlueprintCallable)
    void EndOfPathReached();
    
};

