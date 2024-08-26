#include "LaserModule2.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "HitPointsModifierComponent.h"
#include "Net/UnrealNetwork.h"
#include "TriggerActorComponent.h"

ALaserModule2::ALaserModule2(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
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
    this->AudioEventStartOverride = NULL;
    this->AudioEventStopOverride = NULL;
    this->LaserType = ELaserModule2Type::LineTracedLaser;
    this->UseLineTraceToDetectBlockages = false;
    this->AudioType = ELaserModule2AudioType::Static;
    this->NumberOfLasers = 1;
    this->LaserSpacing = 10.00f;
    this->LaserOnAtStart = true;
    this->MaxBeamLength = 200.00f;
    this->ApplyBurnDecals = false;
    this->AddDropLight = true;
    this->MaxDropLightRange = 40.00f;
    this->LaserHasXRotation = false;
    this->DebugShowCollision = false;
    this->QuickFireDuration = 0.20f;
    this->DecalOversize = 20.00f;
    this->BeamMeshLength = 8.00f;
    this->BeamRadius = 1.00f;
    this->CollisionWidth = 1.00f;
    this->CollisionHeight = 1.00f;
    this->DecalWidth = 20.00f;
    this->LengthDiffForUpdate = 1.00f;
    this->UseBurnParticlesAtEmitter = false;
    this->BeamMaterialTilingFactor = 1.00f;
    this->SingleUnitMergedMesh = NULL;
    this->BackPlateMesh = NULL;
    this->BackPlateLeftMesh = NULL;
    this->BackPlateRightMesh = NULL;
    this->FrontPlateMesh = NULL;
    this->FrontPlateLeftMesh = NULL;
    this->FrontPlateRightMesh = NULL;
    this->EmitterMesh = NULL;
    this->BeamStaticMesh = NULL;
    this->BurnStaticMesh = NULL;
    this->BeamMaterial = NULL;
    this->DropLightMaterial = NULL;
    this->BurnDecalMaterial = NULL;
    this->BurnMaterial = NULL;
    this->BurnParticles = NULL;
    this->CapParticles = NULL;
    this->SourceParticles = NULL;
    this->AudioEventStaticStart = NULL;
    this->AudioEventStaticStop = NULL;
    this->AudioEventBackAndForthStart = NULL;
    this->AudioEventBackAndForthStop = NULL;
    this->AudioEventCircularRotationStart = NULL;
    this->AudioEventCircularRotationStop = NULL;
    this->AudioEventInterruptStart = NULL;
    this->AudioEventInterruptStop = NULL;
    this->AudioEventImpact = NULL;
    this->SingleUnitMergedMeshComponent = NULL;
    this->BackPlateLeftMeshComponent = NULL;
    this->BackPlateRightMeshComponent = NULL;
    this->FrontPlateLeftMeshComponent = NULL;
    this->FrontPlateRightMeshComponent = NULL;
    this->IsOn = false;
    this->AkLaserEmitter->SetupAttachment(RootComponent);
    this->BackPlateMeshes->SetupAttachment(RootComponent);
    this->FrontPlateMeshes->SetupAttachment(RootComponent);
    this->Collision->SetupAttachment(RootComponent);
}

void ALaserModule2::RebuildAllUnits() {
}

void ALaserModule2::OnRep_IsOn() {
}

void ALaserModule2::HandleBeamUnblocked_Implementation(const int32 beamIndex) {
}

void ALaserModule2::HandleBeamBlocked_Implementation(const int32 beamIndex, const float blockDistance, const FVector& blockNormal, UPrimitiveComponent* blockComponent) {
}

void ALaserModule2::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ALaserModule2, IsOn);
}


