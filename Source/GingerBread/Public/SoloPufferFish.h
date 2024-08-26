#pragma once
#include "CoreMinimal.h"
#include "PufferFish.h"
#include "WakeSleep.h"
#include "SoloPufferFish.generated.h"

class UTriggerActorComponent;

UCLASS(Blueprintable)
class ASoloPufferFish : public APufferFish, public IWakeSleep {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTriggerActorComponent* TriggerActorComponent;
    
public:
    ASoloPufferFish(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

