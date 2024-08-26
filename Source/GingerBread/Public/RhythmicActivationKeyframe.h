#pragma once
#include "CoreMinimal.h"
#include "RhythmicActivationKeyframe.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FRhythmicActivationKeyframe {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Beat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> TargetActors;
    
    GINGERBREAD_API FRhythmicActivationKeyframe();
};

