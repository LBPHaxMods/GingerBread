#include "RhythmicLaserModule2.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "HitPointsModifierComponent.h"
#include "Net/UnrealNetwork.h"
#include "TriggerActorComponent.h"

ARhythmicLaserModule2::ARhythmicLaserModule2(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    this->BackPlateMeshes = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("BackPlateMeshes"));
    this->FrontPlateMeshes = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("FrontPlateMeshes"));
    this->Collision = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
    this->AkLaserEmitter = CreateDefaultSubobject<UAkComponent>(TEXT("AkLaserEmitter"));
    this->HitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->PlaySound = false;
    this->AudioEventStaticStart = NULL;
    this->AudioEventStaticStop = NULL;
    this->AudioEventBackAndForthStart = NULL;
    this->AudioEventBackAndForthStop = NULL;
    this->AudioEventCircularRotationStart = NULL;
    this->AudioEventCircularRotationStop = NULL;
    this->AudioEventStartOverride = NULL;
    this->AudioEventStopOverride = NULL;
    this->AudioEventImpact = NULL;
    this->LaserType = ERhythmicLaserModule2Type::LineTracedLaser;
    this->AudioType = ERhythmicLaserModule2AudioType::Static;
    this->NumberOfLasers = 1;
    this->LaserSpacing = 10.00f;
    this->UseVexEmitterStyle = false;
    this->LaserOnAtStart = true;
    this->MaxBeamLength = 200.00f;
    this->ApplyBurnDecals = false;
    this->AddDropLight = true;
    this->MaxDropLightRange = 40.00f;
    this->LaserHasXRotation = false;
    this->DebugShowCollision = false;
    this->QuickFireDuration = 0.20f;
    this->BeamRadius = 1.00f;
    this->DecalOversize = 20.00f;
    this->LengthDiffForUpdate = 1.00f;
    this->BackPlateMesh = NULL;
    this->BackPlateLeftMesh = NULL;
    this->BackPlateRightMesh = NULL;
    this->FrontPlateMesh = NULL;
    this->FrontPlateLeftMesh = NULL;
    this->FrontPlateRightMesh = NULL;
    this->EmitterGenericMesh = NULL;
    this->EmitterVexMesh = NULL;
    this->WiresMesh = NULL;
    this->BeamStaticMesh = NULL;
    this->BurnStaticMesh = NULL;
    this->BeamMaterial = NULL;
    this->DropLightMaterial = NULL;
    this->BurnDecalMaterial = NULL;
    this->BurnMaterial = NULL;
    this->BurnParticles = NULL;
    this->BackPlateLeftMeshComponent = NULL;
    this->BackPlateRightMeshComponent = NULL;
    this->FrontPlateLeftMeshComponent = NULL;
    this->FrontPlateRightMeshComponent = NULL;
    this->IsAwake = false;
    this->IsActivated = true;
    this->IsToggleOn = false;
    this->BackPlateMeshes->SetupAttachment(RootComponent);
    this->FrontPlateMeshes->SetupAttachment(RootComponent);
    this->Collision->SetupAttachment(RootComponent);
    this->AkLaserEmitter->SetupAttachment(RootComponent);
}

void ARhythmicLaserModule2::RebuildAllUnits() {
}

void ARhythmicLaserModule2::OnRep_IsToggleOn() {
}

void ARhythmicLaserModule2::OnRep_IsAwake() {
}

void ARhythmicLaserModule2::OnRep_IsActivated() {
}

void ARhythmicLaserModule2::HandleBeamUnblocked_Implementation(const int32 beamIndex) {
}

void ARhythmicLaserModule2::HandleBeamBlocked_Implementation(const int32 beamIndex, const float blockDistance, const FVector& blockNormal, UPrimitiveComponent* blockComponent) {
}

void ARhythmicLaserModule2::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARhythmicLaserModule2, IsAwake);
    DOREPLIFETIME(ARhythmicLaserModule2, IsActivated);
    DOREPLIFETIME(ARhythmicLaserModule2, IsToggleOn);
}


