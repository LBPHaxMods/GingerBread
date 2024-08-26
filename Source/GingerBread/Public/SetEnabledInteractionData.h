#pragma once
#include "CoreMinimal.h"
#include "SetEnabledInteractionData.generated.h"

class UInteractionComponent;

USTRUCT(BlueprintType)
struct FSetEnabledInteractionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInteractionComponent* InteractionComponent;
    
    GINGERBREAD_API FSetEnabledInteractionData();
};

