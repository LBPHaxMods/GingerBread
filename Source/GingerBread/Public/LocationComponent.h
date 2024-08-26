#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "LocationComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API ULocationComponent : public USceneComponent {
    GENERATED_BODY()
public:
    ULocationComponent(const FObjectInitializer& ObjectInitializer);

};

