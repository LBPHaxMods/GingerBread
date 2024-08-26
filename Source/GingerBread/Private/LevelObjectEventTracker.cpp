#include "LevelObjectEventTracker.h"
#include "Components/BillboardComponent.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"
#include "TriggerActorComponent.h"

ALevelObjectEventTracker::ALevelObjectEventTracker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));

    this->SceneComponent = (USceneComponent*)RootComponent;
    this->BillboardComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("BillboardComponent"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->EventType = ELevelObjectTrackerEvent::DestroyedHitPoints;
    this->Server_RequiredCount = 1;
    this->BillboardComponent->SetupAttachment(RootComponent);
}

void ALevelObjectEventTracker::OnSlapBoltSlapped(ASlapBolt* SlapBolt) {
}

void ALevelObjectEventTracker::OnSlapBoltReleased(ASlapBolt* SlapBolt) {
}

void ALevelObjectEventTracker::OnRep_RequiredTotal() {
}

void ALevelObjectEventTracker::Multicast_OnProgressToEvent_Implementation() {
}

void ALevelObjectEventTracker::HandleActorPostModificationAttempt(const FHitPointModifyResult& Result) {
}

void ALevelObjectEventTracker::AddTrackedActors(TArray<AActor*> ActorsToTrack) {
}

void ALevelObjectEventTracker::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ALevelObjectEventTracker, Server_RequiredCount);
}


