#pragma once
#include "CoreMinimal.h"
#include "SpotShadowManagerComponent.h"
#include "KingFroogleSpotShadowManagerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKingFroogleSpotShadowManagerComponent : public USpotShadowManagerComponent {
    GENERATED_BODY()
public:
    UKingFroogleSpotShadowManagerComponent(const FObjectInitializer& ObjectInitializer);

};

