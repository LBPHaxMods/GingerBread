#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "TeleportLoggerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UTeleportLoggerComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UTeleportLoggerComponent(const FObjectInitializer& ObjectInitializer);

};

