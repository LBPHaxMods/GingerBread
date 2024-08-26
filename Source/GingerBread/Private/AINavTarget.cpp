#include "AINavTarget.h"
#include "Components/StaticMeshComponent.h"

AAINavTarget::AAINavTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DebugVisualisation"));
    this->DebugVisualisation = (UStaticMeshComponent*)RootComponent;
}


