#pragma once
#include "CoreMinimal.h"
#include "InteractionOverlapResult.generated.h"

class UInteractionComponent;

USTRUCT(BlueprintType)
struct FInteractionOverlapResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UInteractionComponent> component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bBlockingHit: 1;
    
    GINGERBREAD_API FInteractionOverlapResult();
};

