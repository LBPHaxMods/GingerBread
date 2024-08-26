#include "ProximityActivator.h"
#include "Components/SceneComponent.h"
#include "InteractionComponent.h"
#include "OverlapManagerComponent.h"
#include "TriggerActorComponent.h"

AProximityActivator::AProximityActivator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));

    this->ProximitySensorType = EProximitySensorType::Sphere;
    this->ProximitySensorPlayerSet = EProximitySensorPlayerSet::SinglePlayer;
    this->bOnlyTriggerOnce = false;
    this->bIsActive = true;
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->OverlapManager = CreateDefaultSubobject<UOverlapManagerComponent>(TEXT("OverlapManager"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->SensorCollider = NULL;
    this->SensorInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("ProximityInteractionSensor"));
    this->SensorInteraction->SetupAttachment(RootComponent);
}

void AProximityActivator::OnSackboyDies(ASackboy* pDeadSackboy) {
}

void AProximityActivator::OnPlayerJoinLeaveEvent(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& player_id, bool IsForcedPlayer) {
}

void AProximityActivator::OnEndOverlapSackboy(UOverlapManagerComponent* pOverlapManagerComponent, UPrimitiveComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex) {
}

void AProximityActivator::OnEndInteractionSackboy(UOverlapManagerComponent* pOverlapManagerComponent, UInteractionComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UInteractionComponent* pOtherComp) {
}

void AProximityActivator::OnBeginOverlapSackboy(UOverlapManagerComponent* pOverlapManagerComponent, UPrimitiveComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AProximityActivator::OnBeginInteractionSackboy(UOverlapManagerComponent* pOverlapManagerComponent, UInteractionComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UInteractionComponent* pOtherComp) {
}

void AProximityActivator::FirePlayersOutOfRangeEvent_Implementation() {
}

void AProximityActivator::FirePlayersInRangeEvent_Implementation() {
}

void AProximityActivator::Deactivate_Implementation() {
}

void AProximityActivator::Activate_Implementation(bool AutoTrigger) {
}


