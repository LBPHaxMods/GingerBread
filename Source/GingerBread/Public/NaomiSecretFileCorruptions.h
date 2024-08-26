#pragma once
#include "CoreMinimal.h"
#include "NaomiSecretFileCorruptions.generated.h"

class ANaomiSplineCorruption;

USTRUCT(BlueprintType)
struct FNaomiSecretFileCorruptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ANaomiSplineCorruption*> Corruptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ANaomiSplineCorruption*> CorruptionsMultiplayer;
    
    GINGERBREAD_API FNaomiSecretFileCorruptions();
};

