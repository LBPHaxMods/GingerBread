#include "CrateSmall.h"
#include "GrappleTargetComponent.h"

ACrateSmall::ACrateSmall(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GrappleTarget = CreateDefaultSubobject<UGrappleTargetComponent>(TEXT("GrappleTarget"));
    this->GrappleTarget->SetupAttachment(RootComponent);
}


