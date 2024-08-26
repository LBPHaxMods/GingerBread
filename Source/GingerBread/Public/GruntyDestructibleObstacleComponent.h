#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GruntyDestructibleObstacleComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGruntyDestructibleObstacleComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UGruntyDestructibleObstacleComponent(const FObjectInitializer& ObjectInitializer);

};

