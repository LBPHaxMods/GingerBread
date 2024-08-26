#pragma once
#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GingerbreadBTTaskNode.h"
#include "RammerChargeTask.generated.h"

class AAIController;
class AActor;
class UPrimitiveComponent;

UCLASS(Abstract, Blueprintable)
class URammerChargeTask : public UGingerbreadBTTaskNode {
    GENERATED_BODY()
public:
    URammerChargeTask();

private:
    UFUNCTION(BlueprintCallable)
    void OnHitPointInteraction(AActor* Actor, UPrimitiveComponent* PrimitiveComponent, int32 HealthModified);
    
    UFUNCTION(BlueprintCallable)
    void OnActorHit(AActor* SelfActor, UPrimitiveComponent* SelfComponent, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
protected:
    UFUNCTION(BlueprintCallable)
    void MoveRequestFinished(TEnumAsByte<EPathFollowingResult::Type> Result, AAIController* AIController);
    
    UFUNCTION(BlueprintCallable)
    void MoveRequestFailed();
    
};

