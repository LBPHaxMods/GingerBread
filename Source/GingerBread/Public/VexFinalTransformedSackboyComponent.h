#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "VexFinalTransformedSackboyComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UVexFinalTransformedSackboyComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UVexFinalTransformedSackboyComponent(const FObjectInitializer& ObjectInitializer);

};

