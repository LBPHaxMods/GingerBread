#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "LocatorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API ULocatorComponent : public USceneComponent {
    GENERATED_BODY()
public:
    ULocatorComponent(const FObjectInitializer& ObjectInitializer);

};

