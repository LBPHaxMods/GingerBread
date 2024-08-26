#pragma once
#include "CoreMinimal.h"
#include "EWobbleBlobBaseType.h"
#include "WobbleBlobBaseColorDeclination.h"
#include "WobbleBlobBaseDefinition.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FWobbleBlobBaseDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EWobbleBlobBaseType::Type> BlobType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWobbleBlobBaseColorDeclination> ColorSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ExplosionEffect;
    
    GINGERBREAD_API FWobbleBlobBaseDefinition();
};

