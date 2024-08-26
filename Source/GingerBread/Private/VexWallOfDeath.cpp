#include "VexWallOfDeath.h"
#include "AkComponent.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "SplineFollowerComponent.h"
#include "TriggerActorComponent.h"

AVexWallOfDeath::AVexWallOfDeath(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

    this->ObjectRootComponent = (USceneComponent*)RootComponent;
    this->WallRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("WallRoot"));
    this->SplinePath = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->PoleSections = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("PoleSections"));
    this->AddonSectionsA = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("AddonSectionsA"));
    this->AddonSectionsB = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("AddonSectionsB"));
    this->WallStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WallStaticMesh"));
    this->Ak_VexWallOfDeath = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_VexWallOfDeath"));
    this->SplineFollowerComponent = CreateDefaultSubobject<USplineFollowerComponent>(TEXT("SplineFollowerComponent"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->WallWidth = 210.00f;
    this->DelayFromReadyToOn = 3.00f;
    this->WallMesh = NULL;
    this->WallMeshOffsetX = 0.00f;
    this->WallMeshMaterial = NULL;
    this->MinSpeed = 5.00f;
    this->MaxSpeed = 50.00f;
    this->MaxSpeedDistance = 100.00f;
    this->SackboyDistanceOffset = 2.00f;
    this->Danger_Begin_DistFromPole = 0.00f;
    this->Danger_End_DistFromPole = 12.00f;
    this->SackboyZapVFXOffset = 1.00f;
    this->TimeBeforeZapping = 2.00f;
    this->ZapParticleSys = NULL;
    this->WallOnEvent = NULL;
    this->WallOffEvent = NULL;
    this->WallHumEvent = NULL;
    this->WallHumStopEvent = NULL;
    this->PoleMaterialInst = NULL;
    this->WallDefaultFillEmissive = 1.00f;
    this->WallDefaultDangerEmissive = 5.00f;
    this->WallDefaultZapEmissive = 10.00f;
    this->Server_State = EVexWallOfDeathState::Off;
    this->PoleDynamicMatInst = NULL;
    this->WallDynamicMatInst = NULL;
    this->ActualWallWidth = 0.00f;
    this->WallRootComponent->SetupAttachment(RootComponent);
    this->SplinePath->SetupAttachment(RootComponent);
    this->PoleSections->SetupAttachment(WallRootComponent);
    this->AddonSectionsA->SetupAttachment(PoleSections);
    this->AddonSectionsB->SetupAttachment(PoleSections);
    this->WallStaticMeshComponent->SetupAttachment(WallRootComponent);
    this->Ak_VexWallOfDeath->SetupAttachment(WallRootComponent);
}

void AVexWallOfDeath::Server_SetState(const EVexWallOfDeathState NewState) {
}

void AVexWallOfDeath::OnSplineEndReached(USplineFollowerComponent* SplineFollower, bool WasTravellingForward) {
}

void AVexWallOfDeath::OnSpawnPointResetLevel(USpawnPointComponent* SpawnPoint, bool FirstTime) {
}

void AVexWallOfDeath::OnRep_ServerState() {
}

void AVexWallOfDeath::OnFinishedReset() {
}

void AVexWallOfDeath::Multicast_ZapSackboy_Implementation(ASackboy* Sackboy) {
}

void AVexWallOfDeath::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVexWallOfDeath, Server_State);
    DOREPLIFETIME(AVexWallOfDeath, TeamASackboys);
    DOREPLIFETIME(AVexWallOfDeath, TeamBSackboys);
}


