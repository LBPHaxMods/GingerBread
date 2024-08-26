#include "WAMMoleChildMama.h"
#include "Components/StaticMeshComponent.h"

AWAMMoleChildMama::AWAMMoleChildMama(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Hair = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Hair"));
    this->StaticMesh_0 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh_0"));
    this->EarRingL = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EarRingL"));
    this->EarRingR = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EarRingR"));
    this->StaticMesh_0->SetupAttachment(Hair);
    this->EarRingL->SetupAttachment(RootComponent);
    this->EarRingR->SetupAttachment(RootComponent);
    this->Hair->SetupAttachment(RootComponent);
}


