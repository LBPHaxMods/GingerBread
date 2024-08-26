#pragma once
#include "CoreMinimal.h"
#include "EFlyingDuopedeSpeed.h"
#include "FlyingDuopedeSegment.h"
#include "WakeSleep.h"
#include "SoloFlyingDuopedeSegment.generated.h"

class UTriggerActorComponent;

UCLASS(Blueprintable)
class ASoloFlyingDuopedeSegment : public AFlyingDuopedeSegment, public IWakeSleep {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFlyingDuopedeSpeed SoloDuopedeSpeed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTriggerActorComponent* TriggerComponent;
    
public:
    ASoloFlyingDuopedeSegment(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

