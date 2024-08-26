#pragma once
#include "CoreMinimal.h"
#include "SackboyBlueprintComponent_Base.h"
#include "TelemetrySackboyBlueprintComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UTelemetrySackboyBlueprintComponent : public USackboyBlueprintComponent_Base {
    GENERATED_BODY()
public:
    UTelemetrySackboyBlueprintComponent(const FObjectInitializer& ObjectInitializer);

};

