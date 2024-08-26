#include "CheckpointOnString.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"

ACheckpointOnString::ACheckpointOnString(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->StringPivot = CreateDefaultSubobject<USceneComponent>(TEXT("StringPivot"));
    this->StringMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StringMesh"));
    this->CheckpointBack = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CheckpointBack"));
    this->VineDestroyingCollider = CreateDefaultSubobject<UCapsuleComponent>(TEXT("VineDestroyingCollider"));
    this->VineDestroyingInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("VineDestroyingInteraction"));
    this->Checkpoint = NULL;
    this->Boss = NULL;
    this->Motion_Curve = NULL;
    this->MotionDuration = 2.00f;
    this->ComingUpDelay = 0.50f;
    this->Start_Z_Location = 50.00f;
    this->End_Z_Location = -50.00f;
    this->Rotation_Curve = NULL;
    this->MaxRotationAngle = 10.00f;
    this->NetState = ECheckpointOnStringNetState::Up;
    this->StringPivot->SetupAttachment(RootComponent);
    this->StringMesh->SetupAttachment(StringPivot);
    this->CheckpointBack->SetupAttachment(StringMesh);
    this->VineDestroyingCollider->SetupAttachment(StringMesh);
    this->VineDestroyingInteraction->SetupAttachment(StringMesh);
}

void ACheckpointOnString::Start() {
}

void ACheckpointOnString::SetCheckpointEnabled(bool Enabled) {
}

void ACheckpointOnString::OnVineDestroyerOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ACheckpointOnString::OnVineDestroyerInteract(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void ACheckpointOnString::OnSpawnSequenceInitiated(USpawnPointComponent* SpawnPoint) {
}

void ACheckpointOnString::OnRep_NetState() {
}

void ACheckpointOnString::OnCheckpointManagerAvailable(AActor* ManagerActor) {
}

void ACheckpointOnString::OnAllPlayersDied(USpawnPointComponent* spawn_point) {
}

void ACheckpointOnString::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACheckpointOnString, NetState);
}


