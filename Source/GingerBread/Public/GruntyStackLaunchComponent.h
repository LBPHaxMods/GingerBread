#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GruntyStackLaunchComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGruntyStackLaunchComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UGruntyStackLaunchComponent(const FObjectInitializer& ObjectInitializer);

};

