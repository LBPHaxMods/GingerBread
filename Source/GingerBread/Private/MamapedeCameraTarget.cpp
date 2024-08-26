#include "MamapedeCameraTarget.h"
#include "Components/SceneComponent.h"

AMamapedeCameraTarget::AMamapedeCameraTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->MamapedeTargetActor = NULL;
    this->InterpolationSpeed = 0.50f;
    this->FocusHeight = 5.00f;
}

void AMamapedeCameraTarget::OnCameraManagerAvailable(AActor* ManagerActor) {
}


