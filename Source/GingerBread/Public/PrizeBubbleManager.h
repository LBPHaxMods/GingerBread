#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PrizeBubbleManager.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPrizeBubbleManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPrizeBubbleManager(const FObjectInitializer& ObjectInitializer);

};

