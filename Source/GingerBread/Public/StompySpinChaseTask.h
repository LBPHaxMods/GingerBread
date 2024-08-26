#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "Navigation/PathFollowingComponent.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GingerbreadBTTaskNode.h"
#include "HitPointModifyResult.h"
#include "StompySpinChaseTask.generated.h"

class AAIController;
class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class UStompySpinChaseTask : public UGingerbreadBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector MoveToLocationBB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetToFollowBB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector NeedsToCelebrateBB;
    
    UStompySpinChaseTask();

protected:
    UFUNCTION(BlueprintCallable)
    void SpinDamageApplied(const FHitPointModifyResult& HitResult);
    
    UFUNCTION(BlueprintCallable)
    void OnSpinColliderHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void MoveRequestFinished(TEnumAsByte<EPathFollowingResult::Type> Result, AAIController* AIController);
    
    UFUNCTION(BlueprintCallable)
    void MoveRequestFailed();
    
};

