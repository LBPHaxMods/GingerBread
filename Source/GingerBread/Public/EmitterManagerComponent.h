#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "EmitterManagerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UEmitterManagerComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UEmitterManagerComponent(const FObjectInitializer& ObjectInitializer);

};

