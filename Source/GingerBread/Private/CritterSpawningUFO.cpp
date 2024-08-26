#include "CritterSpawningUFO.h"
#include "AkComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "GameplayTagComponent.h"
#include "Net/UnrealNetwork.h"
#include "TriggerActorComponent.h"

ACritterSpawningUFO::ACritterSpawningUFO(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

    this->Root = (USceneComponent*)RootComponent;
    this->UFOSkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("UFOSkeletalMesh"));
    this->CapsuleCollider = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleCollider"));
    this->LightBeamMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LightBeamMesh"));
    this->SpawnPoint = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SpawnPoint"));
    this->SpawnDirection = CreateDefaultSubobject<UArrowComponent>(TEXT("SpawnDirection"));
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->Ak_CritterSpawnUFO = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_CritterSpawnUFO"));
    this->LightBeamAnimTL = CreateDefaultSubobject<UTimelineComponent>(TEXT("LightBeamAnimTL"));
    this->LightBeamCurve = NULL;
    this->CritterSpawnAudio = NULL;
    this->TriggerComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerComponent"));
    this->bActiveOnStart = false;
    this->SpawnDelay = 4.00f;
    this->RespawnDelay = 4.00f;
    this->bSpawnLight = true;
    this->ActorToSpawn = NULL;
    this->ReturnToIdleDelay = 1.00f;
    this->AuthState = ECritterSpawnUFOState::NONE;
    this->bActive = false;
    this->UFOSkeletalMesh->SetupAttachment(RootComponent);
    this->CapsuleCollider->SetupAttachment(UFOSkeletalMesh);
    this->LightBeamMesh->SetupAttachment(RootComponent);
    this->SpawnPoint->SetupAttachment(RootComponent);
    this->SpawnDirection->SetupAttachment(SpawnPoint);
    this->GameplayTag->SetupAttachment(RootComponent);
    this->Ak_CritterSpawnUFO->SetupAttachment(UFOSkeletalMesh);
}

void ACritterSpawningUFO::SetAuthStateToIdle() {
}

void ACritterSpawningUFO::RespawnActor(AActor* DestroyedActor) {
}

void ACritterSpawningUFO::PlayLightBeamTL() {
}

void ACritterSpawningUFO::OnRep_AuthState() {
}

void ACritterSpawningUFO::OnRep_ActiveState() {
}

void ACritterSpawningUFO::DelayedRespawnActor() {
}

void ACritterSpawningUFO::BeamTLUpdate(FVector InVector) {
}

void ACritterSpawningUFO::BeamTLFinished() {
}

void ACritterSpawningUFO::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACritterSpawningUFO, AuthState);
    DOREPLIFETIME(ACritterSpawningUFO, bActive);
}


