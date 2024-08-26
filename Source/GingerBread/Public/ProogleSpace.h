#pragma once
#include "CoreMinimal.h"
#include "Proogle.h"
#include "ProogleSpace.generated.h"

class UProogleSpaceSuperAttackComponent;

UCLASS(Blueprintable)
class AProogleSpace : public AProogle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProogleSpaceSuperAttackComponent* SpaceSuperAttackComponent;
    
    AProogleSpace(const FObjectInitializer& ObjectInitializer);

};

