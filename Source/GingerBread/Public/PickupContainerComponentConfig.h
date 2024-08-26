#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PickupContainerComponentConfig.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=PickupContainerComponent)
class GINGERBREAD_API UPickupContainerComponentConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinNumSmallCollectabells;
    
    UPickupContainerComponentConfig();

};

