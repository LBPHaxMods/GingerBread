#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "CsgSpatialAudioVolumeComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UCsgSpatialAudioVolumeComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UCsgSpatialAudioVolumeComponent(const FObjectInitializer& ObjectInitializer);

};

