#pragma once
#include "CoreMinimal.h"
#include "SniperNeedleBase.h"
#include "SniperNeedleAmazon.generated.h"

UCLASS(Blueprintable)
class ASniperNeedleAmazon : public ASniperNeedleBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomRollRange;
    
    ASniperNeedleAmazon(const FObjectInitializer& ObjectInitializer);

};

