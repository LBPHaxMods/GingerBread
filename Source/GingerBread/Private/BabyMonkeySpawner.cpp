#include "BabyMonkeySpawner.h"
#include "Components/ArrowComponent.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

ABabyMonkeySpawner::ABabyMonkeySpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));

    this->SceneComponent = (USceneComponent*)RootComponent;
    this->BelowSpawnPointComponent = CreateDefaultSubobject<USceneComponent>(TEXT("BelowSpawnPointComponent"));
    this->ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
    this->SpawnFromBelow = false;
    this->BabyMonkeyClass = NULL;
    this->SpawnedBabyMonkey = NULL;
    this->BelowSpawnPointComponent->SetupAttachment(RootComponent);
    this->ArrowComponent->SetupAttachment(RootComponent);
}

void ABabyMonkeySpawner::OnRep_SpawnedBabyMonkey() {
}

void ABabyMonkeySpawner::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABabyMonkeySpawner, SpawnedBabyMonkey);
}


