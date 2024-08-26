#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SingleScreenCameraPreviewActor.generated.h"

UCLASS(Blueprintable)
class GINGERBREAD_API ASingleScreenCameraPreviewActor : public AActor {
    GENERATED_BODY()
public:
    ASingleScreenCameraPreviewActor(const FObjectInitializer& ObjectInitializer);

};

