#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_LoopBPBase.generated.h"

class AAIController;
class AActor;
class APawn;

UCLASS(Blueprintable)
class UBTDecorator_LoopBPBase : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAIController* AIOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ActorOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumLoops;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInfiniteLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InfiniteLoopTimeoutTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowPropertyDetails;
    
public:
    UBTDecorator_LoopBPBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool StopLoop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveExecutionStartAI(AAIController* OwnerController, APawn* ControlledPawn);
    
};

