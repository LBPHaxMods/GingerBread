#include "CameraColliderActor.h"
#include "CameraAreaCollider.h"

ACameraColliderActor::ACameraColliderActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCameraAreaCollider>(TEXT("Box"));
    this->Billboard = NULL;
    this->Box = (UCameraAreaCollider*)RootComponent;
    this->SplineActor = NULL;
    this->SplineWidth = 30.00f;
    this->SplineHeight = 30.00f;
    this->StaticMesh = NULL;
    this->ColliderType = ECameraColliderType::Box;
    this->IsAGlobalConstraint = false;
    this->Enabled = true;
    this->Priority = 0;
}

void ACameraColliderActor::OnCameraManagerAvailable(AActor* ManagerActor) {
}


