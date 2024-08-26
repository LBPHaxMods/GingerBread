#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RammerTeleportManagerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URammerTeleportManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    URammerTeleportManagerComponent(const FObjectInitializer& ObjectInitializer);

};

