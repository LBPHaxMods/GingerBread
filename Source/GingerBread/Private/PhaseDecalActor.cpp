#include "PhaseDecalActor.h"
#include "Components/BoxComponent.h"
#include "InteractionComponent.h"
#include "TriggerActorComponent.h"

APhaseDecalActor::APhaseDecalActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->BoxOverlap = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxOverlap"));
    this->BoxInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("BoxOverlapInteraction"));
    this->BoxInteraction->SetupAttachment(RootComponent);
}

void APhaseDecalActor::OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void APhaseDecalActor::OnEndInteraction(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void APhaseDecalActor::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void APhaseDecalActor::OnBeginInteraction(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp) {
}


