#pragma once
#include "CoreMinimal.h"
#include "GingerbreadHUDComponent.h"
#include "LaunchDemoLoadingHudComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ULaunchDemoLoadingHudComponent : public UGingerbreadHUDComponent {
    GENERATED_BODY()
public:
    ULaunchDemoLoadingHudComponent(const FObjectInitializer& ObjectInitializer);

};

