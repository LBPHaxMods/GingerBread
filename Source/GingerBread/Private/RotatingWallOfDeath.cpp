#include "RotatingWallOfDeath.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameplayTagComponent.h"
#include "Net/UnrealNetwork.h"

ARotatingWallOfDeath::ARotatingWallOfDeath(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Axis"));
    this->Axis = (USceneComponent*)RootComponent;
    this->PoleSections = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("PoleSections"));
    this->DetailSections1 = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("DetailSections1"));
    this->DetailSections2 = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("DetailSections2"));
    this->LaserWall = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LaserWall"));
    this->SpawnPreventer = CreateDefaultSubobject<UBoxComponent>(TEXT("SpawnPreventer"));
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->NaomiEye = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("NaomiEye"));
    this->Iris = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Iris"));
    this->Ak_RotatingWallOfDeath = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_RotatingWallOfDeath"));
    this->SackboyTracker = CreateDefaultSubobject<USceneComponent>(TEXT("SackboyTracker"));
    this->TrailVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("TrailVFX"));
    this->Beam1 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Beam1"));
    this->Beam2 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Beam2"));
    this->Beam3 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Beam3"));
    this->Beam4 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Beam4"));
    this->WallMeshWidth = 100.00f;
    this->PoleMeshHeight = 30.00f;
    this->Detail1MeshHeight = 12.00f;
    this->Detail2MeshHeight = 2.00f;
    this->StartSFX = NULL;
    this->StopSFX = NULL;
    this->HumOnSFX = NULL;
    this->HumOffSFX = NULL;
    this->ZapSFX = NULL;
    this->EyeSpeed = 1.00f;
    this->EyeHeight = 25.00f;
    this->WarningTime = 1.00f;
    this->FireFromPole = true;
    this->WallHeight = 100.00f;
    this->WallRadius = 220.00f;
    this->MinRotationSpeed = 2.40f;
    this->MaxRotationSpeed = 48.00f;
    this->EndStopAngle = 0.00f;
    this->CurrentState = EWallOfDeathState::Off;
    this->ServerWorldRotationEstimate = -999.90f;
    this->TeleportCounter = 0;
    this->NaomiEye->SetupAttachment(LaserWall);
    this->Iris->SetupAttachment(NaomiEye);
    this->Ak_RotatingWallOfDeath->SetupAttachment(NaomiEye);
    this->SackboyTracker->SetupAttachment(PoleSections);
    this->TrailVFX->SetupAttachment(SackboyTracker);
    this->Beam1->SetupAttachment(RootComponent);
    this->Beam2->SetupAttachment(RootComponent);
    this->Beam3->SetupAttachment(RootComponent);
    this->Beam4->SetupAttachment(RootComponent);
    this->PoleSections->SetupAttachment(RootComponent);
    this->DetailSections1->SetupAttachment(PoleSections);
    this->DetailSections2->SetupAttachment(PoleSections);
    this->LaserWall->SetupAttachment(RootComponent);
    this->SpawnPreventer->SetupAttachment(LaserWall);
    this->GameplayTag->SetupAttachment(SpawnPreventer);
}

void ARotatingWallOfDeath::StartTheWallOfDeath() {
}

void ARotatingWallOfDeath::RemoveSackboyFromSafeList(ASackboy* Sackboy) {
}

void ARotatingWallOfDeath::OnRep_TeleportCounter() {
}

void ARotatingWallOfDeath::OnRep_ServerWorldRotationEstimate(float PreviousRotationEstimate) {
}

void ARotatingWallOfDeath::OnRep_CurrentState() {
}

void ARotatingWallOfDeath::OnLevelReset(USpawnPointComponent* SpawnPoint, bool FirstTime) {
}

void ARotatingWallOfDeath::EnterFinalSection() {
}

void ARotatingWallOfDeath::EndTheWallOfDeath() {
}

void ARotatingWallOfDeath::AddSackboyToSafeList(ASackboy* Sackboy) {
}

void ARotatingWallOfDeath::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARotatingWallOfDeath, CurrentState);
    DOREPLIFETIME(ARotatingWallOfDeath, ServerWorldRotationEstimate);
    DOREPLIFETIME(ARotatingWallOfDeath, TeleportCounter);
}


