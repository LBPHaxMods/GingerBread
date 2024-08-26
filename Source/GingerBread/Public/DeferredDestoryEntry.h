#pragma once
#include "CoreMinimal.h"
#include "DeferredDestoryEntry.generated.h"

class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FDeferredDestoryEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ParticleSystemComponent;
    
    GINGERBREAD_API FDeferredDestoryEntry();
};

