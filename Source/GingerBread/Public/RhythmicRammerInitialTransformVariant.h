#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RhythmicRammerInitialTransformVariant.generated.h"

USTRUCT(BlueprintType)
struct FRhythmicRammerInitialTransformVariant {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsWorldTransform;
    
public:
    GINGERBREAD_API FRhythmicRammerInitialTransformVariant();
};

