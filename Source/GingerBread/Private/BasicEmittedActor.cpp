#include "BasicEmittedActor.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

ABasicEmittedActor::ABasicEmittedActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComp"));

    this->StaticMeshComp = (UStaticMeshComponent*)RootComponent;
    this->bEnableGravity = false;
}

void ABasicEmittedActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABasicEmittedActor, bEnableGravity);
    DOREPLIFETIME(ABasicEmittedActor, m_Velocity);
    DOREPLIFETIME(ABasicEmittedActor, M_Spin);
}


