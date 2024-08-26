#include "SlapBolt.h"
#include "AkComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "PickupContainerComponent.h"
#include "TriggerActorComponent.h"

ASlapBolt::ASlapBolt(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    this->Root = (USceneComponent*)RootComponent;
    this->PickupContainer = CreateDefaultSubobject<UPickupContainerComponent>(TEXT("PickupContainer"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->BoltWasher = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BoltWasher"));
    this->ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));

    this->ScrewReleaseVelocity = 40.00f;
    this->PickupDelay = 0.10f;
    this->ScrewReleaseUpMagnitude = 100.00f;
    this->SpawnBellAudioEvent = NULL;
    this->SpawnedScrew = NULL;
    this->SlapBoltScrewToSpawn = NULL;
    this->ReplicatedWorldLocation = EWorldLocation::Void;
    this->AkComponent->SetupAttachment(RootComponent);
    this->BoltWasher->SetupAttachment(RootComponent);
    this->ArrowComponent->SetupAttachment(RootComponent);
    this->PickupContainer->SetupAttachment(RootComponent);
}

void ASlapBolt::OnRep_ReplicateScrew() {
}

void ASlapBolt::OnGingerBreadWorldManagerAvailable(AActor* ManagerActor) {
}

void ASlapBolt::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASlapBolt, SpawnedScrew);
    DOREPLIFETIME(ASlapBolt, ReplicatedWorldLocation);
}


