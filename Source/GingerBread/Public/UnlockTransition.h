#pragma once
#include "CoreMinimal.h"
#include "UnlockTransition.generated.h"

class ALevelBadge;
class AProceduralActor;

USTRUCT(BlueprintType)
struct FUnlockTransition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelBadge* SourceLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AProceduralActor*> RollPaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideDurationSeconds;
    
    GINGERBREAD_API FUnlockTransition();
};

