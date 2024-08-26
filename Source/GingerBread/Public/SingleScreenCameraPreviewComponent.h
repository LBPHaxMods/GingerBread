#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SingleScreenCameraPreviewComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API USingleScreenCameraPreviewComponent : public USceneComponent {
    GENERATED_BODY()
public:
    USingleScreenCameraPreviewComponent(const FObjectInitializer& ObjectInitializer);

};

