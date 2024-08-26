#pragma once
#include "CoreMinimal.h"
#include "SpotShadowManagerComponent.h"
#include "ProogleSpotShadowManagerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UProogleSpotShadowManagerComponent : public USpotShadowManagerComponent {
    GENERATED_BODY()
public:
    UProogleSpotShadowManagerComponent(const FObjectInitializer& ObjectInitializer);

};

