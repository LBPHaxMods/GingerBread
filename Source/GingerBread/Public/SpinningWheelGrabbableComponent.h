#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SpinningWheelGrabbableComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USpinningWheelGrabbableComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USpinningWheelGrabbableComponent(const FObjectInitializer& ObjectInitializer);

};

