#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RhythmicBeatReceiver.h"
#include "RhythmicEmitter.generated.h"

class UArrowComponent;
class UParticleSystem;

UCLASS(Abstract, Blueprintable)
class ARhythmicEmitter : public AActor, public IRhythmicBeatReceiver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticleSystem;
    
public:
    ARhythmicEmitter(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

