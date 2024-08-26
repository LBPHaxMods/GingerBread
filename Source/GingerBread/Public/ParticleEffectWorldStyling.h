#pragma once
#include "CoreMinimal.h"
#include "ColourParameterPair.h"
#include "ParticleEffectWorldStyling.generated.h"

USTRUCT(BlueprintType)
struct FParticleEffectWorldStyling {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FColourParameterPair> ColourParameters;
    
    GINGERBREAD_API FParticleEffectWorldStyling();
};

