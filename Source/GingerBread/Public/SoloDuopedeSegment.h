#pragma once
#include "CoreMinimal.h"
#include "DuopedeSegment.h"
#include "EDuopedeSpeed.h"
#include "WakeSleep.h"
#include "SoloDuopedeSegment.generated.h"

class UTriggerActorComponent;

UCLASS(Blueprintable)
class ASoloDuopedeSegment : public ADuopedeSegment, public IWakeSleep {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDuopedeSpeed SoloDuopedeSpeed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTriggerActorComponent* TriggerComponent;
    
public:
    ASoloDuopedeSegment(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

