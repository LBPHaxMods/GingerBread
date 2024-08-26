#pragma once
#include "CoreMinimal.h"
#include "TouchScreenAppCollectableBaseComponent.h"
#include "TouchScreenAppCollectabellComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UTouchScreenAppCollectabellComponent : public UTouchScreenAppCollectableBaseComponent {
    GENERATED_BODY()
public:
    UTouchScreenAppCollectabellComponent(const FObjectInitializer& ObjectInitializer);

};

