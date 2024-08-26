#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ProjectileSweepResult.generated.h"

class UInteractionComponent;

USTRUCT(BlueprintType)
struct FProjectileSweepResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UInteractionComponent> Interaction;
    
    GINGERBREAD_API FProjectileSweepResult();
};

