#include "HerdingCritterPen.h"
#include "Components/BoxComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "PickupContainerComponent.h"

AHerdingCritterPen::AHerdingCritterPen(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("DetectionBox"));
    this->DetectionBox = (UBoxComponent*)RootComponent;
    this->PickupContainer = CreateDefaultSubobject<UPickupContainerComponent>(TEXT("PickupContainerComponent"));
    this->InteractionComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("InteractionComponent"));
    this->TargetCritterCount = 10;
    this->CurrentCritterCount = 0;
    this->PickupContainer->SetupAttachment(RootComponent);
    this->InteractionComponent->SetupAttachment(RootComponent);
}

void AHerdingCritterPen::OnRep_CurrentCritterCount(const int32 PreviousCritterCount) {
}

void AHerdingCritterPen::OnDetectionBoxEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AHerdingCritterPen::OnDetectionBoxEndInteract(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void AHerdingCritterPen::OnDetectionBoxBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AHerdingCritterPen::OnDetectionBoxBeginInteract(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

int32 AHerdingCritterPen::GetTargetCritterCount() {
    return 0;
}

int32 AHerdingCritterPen::GetCurrentCritterCount() {
    return 0;
}

void AHerdingCritterPen::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHerdingCritterPen, CurrentCritterCount);
}


