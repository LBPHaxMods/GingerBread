#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BossArenaBoundsDebugComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBossArenaBoundsDebugComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UBossArenaBoundsDebugComponent(const FObjectInitializer& ObjectInitializer);

};

