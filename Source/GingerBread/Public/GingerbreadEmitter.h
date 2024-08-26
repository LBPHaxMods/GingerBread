#pragma once
#include "CoreMinimal.h"
#include "Particles/Emitter.h"
#include "WakeSleep.h"
#include "GingerbreadEmitter.generated.h"

class UTriggerActorComponent;

UCLASS(Blueprintable)
class GINGERBREAD_API AGingerbreadEmitter : public AEmitter, public IWakeSleep {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTriggerActorComponent* TriggerActorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ParticleSystemActive;
    
public:
    AGingerbreadEmitter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void DeactivateEmitter();
    
    UFUNCTION(BlueprintCallable)
    void ActivateEmitter();
    

    // Fix for true pure virtual functions not being implemented
};

