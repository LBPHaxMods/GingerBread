#pragma once
#include "CoreMinimal.h"
#include "SackboyInDangerTracker.generated.h"

class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FSackboyInDangerTracker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ZapParticleSys;
    
    GINGERBREAD_API FSackboyInDangerTracker();
};

