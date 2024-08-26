#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GingerbreadBTTaskNode.h"
#include "AIHitReactionWaitGroundedTask.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class UAIHitReactionWaitGroundedTask : public UGingerbreadBTTaskNode {
    GENERATED_BODY()
public:
    UAIHitReactionWaitGroundedTask();

protected:
    UFUNCTION(BlueprintCallable)
    void OnActorHit(AActor* SelfActor, UPrimitiveComponent* SelfComponent, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
};

