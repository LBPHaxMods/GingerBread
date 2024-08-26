#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify_PlayParticleEffect.h"
#include "EWorldLocation.h"
#include "ParticleEffectWorldStyling.h"
#include "AnimNotify_PlayWorldStyledParticleEffect.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class GINGERBREAD_API UAnimNotify_PlayWorldStyledParticleEffect : public UAnimNotify_PlayParticleEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWorldLocation, FParticleEffectWorldStyling> WorldStylings;
    
public:
    UAnimNotify_PlayWorldStyledParticleEffect();

};

