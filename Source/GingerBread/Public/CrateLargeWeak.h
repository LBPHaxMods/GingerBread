#pragma once
#include "CoreMinimal.h"
#include "CrateLarge.h"
#include "CrateLargeWeak.generated.h"

class UParticleSystem;

UCLASS(Blueprintable)
class ACrateLargeWeak : public ACrateLarge {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticlesOnBump;
    
public:
    ACrateLargeWeak(const FObjectInitializer& ObjectInitializer);

};

