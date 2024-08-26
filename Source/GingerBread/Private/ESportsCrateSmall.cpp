#include "ESportsCrateSmall.h"
#include "GrappleTargetComponent.h"

AESportsCrateSmall::AESportsCrateSmall(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GrappleTarget = CreateDefaultSubobject<UGrappleTargetComponent>(TEXT("GrappleTarget"));
    this->GrappleTarget->SetupAttachment(RootComponent);
}


