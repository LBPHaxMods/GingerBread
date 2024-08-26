#include "DoorwayBase.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "SpawnPointComponent.h"
#include "TriggerActorComponent.h"

ADoorwayBase::ADoorwayBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    this->YankTargetComponent = CreateDefaultSubobject<USceneComponent>(TEXT("YankTargetComponent"));
    this->YankDetectorComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("YankDetectorComponent"));
    this->YankInteractionComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("YankInteractionComponent"));
    this->SpawnPointComponent = CreateDefaultSubobject<USpawnPointComponent>(TEXT("SpawnPointComponent"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->TargetDoorway = NULL;
    this->FadeToBlackDelay = 0.80f;
    this->OnlyNetworkGameHostCanActivate = false;
    this->ShouldDestroyNonSackboyObjects = true;
    this->RemoveGloopFromSackboys = false;
    this->ScreenTransitionComponentClass = NULL;
    this->DestroyedObjectParticleSystem = NULL;
    this->DestroyedObjectAudioEvent = NULL;
    this->AUTH_AllSackboysAtDoorway = false;
    this->YankTargetComponent->SetupAttachment(RootComponent);
    this->YankDetectorComponent->SetupAttachment(RootComponent);
    this->YankInteractionComponent->SetupAttachment(RootComponent);
    this->SpawnPointComponent->SetupAttachment(RootComponent);
}

void ADoorwayBase::SpawnDestroyedObjectParticleSystem_Implementation(FVector ActorLocation) {
}

void ADoorwayBase::OnYankDetectorComponentOverlapped(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ADoorwayBase::OnYankDetectorComponentInteract(UInteractionComponent* pOverlappedComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp) {
}

void ADoorwayBase::OnPreSpawnAtDoorway(USpawnPointComponent* pSpawnPointComponent) {
}

void ADoorwayBase::OnDoorwayEnteredByFirstSackboy_Implementation(ASackboy* pSackboy) {
}

void ADoorwayBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADoorwayBase, AUTH_AllSackboysAtDoorway);
}


