#pragma once
#include "CoreMinimal.h"
#include "SpinSlapToyVFXEntry.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FSpinSlapToyVFXEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAdditive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlayerColorParam;
    
    GINGERBREAD_API FSpinSlapToyVFXEntry();
};

