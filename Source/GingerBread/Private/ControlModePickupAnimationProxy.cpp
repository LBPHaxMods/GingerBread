#include "ControlModePickupAnimationProxy.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AControlModePickupAnimationProxy::AControlModePickupAnimationProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SceneRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Root"));
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Pickup Mesh"));
    this->MeshComponent->SetupAttachment(SceneRootComponent);
}


