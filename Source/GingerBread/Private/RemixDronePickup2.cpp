#include "RemixDronePickup2.h"
#include "Components/BillboardComponent.h"
#include "Components/SphereComponent.h"
#include "Net/UnrealNetwork.h"

ARemixDronePickup2::ARemixDronePickup2(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
    this->SphereComponent = (USphereComponent*)RootComponent;
    this->BillboardComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("BillboardComponent"));
    this->Drone = NULL;
    this->PickupType = NULL;
    this->PickupTypeIndex = 0;
    this->MoveCurve = NULL;
    this->SplineDistance = 0.00f;
    this->BillboardComponent->SetupAttachment(RootComponent);
}

void ARemixDronePickup2::TimelineCallback(float val) {
}

void ARemixDronePickup2::OnRep_PickupActor() {
}

void ARemixDronePickup2::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARemixDronePickup2, PickupActor);
}


