#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BoomarangDestroyed.generated.h"

class UParticleSystem;

UCLASS(Blueprintable)
class ABoomarangDestroyed : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BreakVFX;
    
    ABoomarangDestroyed(const FObjectInitializer& ObjectInitializer);

};

