#include "LaserModuleNaomi.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "CSPHelperComponent.h"
#include "HitPointsModifierComponent.h"
#include "Net/UnrealNetwork.h"
#include "TriggerActorComponent.h"

ALaserModuleNaomi::ALaserModuleNaomi(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    this->BackPlateMeshes = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("BackPlateMeshes"));
    this->FrontPlateMeshes = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("FrontPlateMeshes"));
    this->Collision = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
    this->AkLaserEmitter = CreateDefaultSubobject<UAkComponent>(TEXT("AkLaserEmitter"));
    this->AkLaserHapticsEmitter = CreateDefaultSubobject<UAkComponent>(TEXT("AkLaserHapticsEmitter"));
    this->HitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->CSPHelperComponent = CreateDefaultSubobject<UCSPHelperComponent>(TEXT("CSPHelperComponent"));
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
    this->LaserType = ELaserModuleNaomiType::LineTracedLaser;
    this->AudioType = ELaserModuleNaomiAudioType::Static;
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
    this->BeamRadius = 1.00f;
    this->DecalOversize = 20.00f;
    this->LengthDiffForUpdate = 1.00f;
    this->UseModuleHousingMeshes = true;
    this->UseModuleEmitterMeshes = true;
    this->HapticsSwooshLasersRange = 100.00f;
    this->BackPlateMesh = NULL;
    this->BackPlateLeftMesh = NULL;
    this->BackPlateRightMesh = NULL;
    this->FrontPlateMesh = NULL;
    this->FrontPlateLeftMesh = NULL;
    this->FrontPlateRightMesh = NULL;
    this->EmitterMesh = NULL;
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
    this->AkLaserHapticsEmitter->SetupAttachment(RootComponent);
    this->BackPlateMeshes->SetupAttachment(RootComponent);
    this->FrontPlateMeshes->SetupAttachment(RootComponent);
    this->Collision->SetupAttachment(RootComponent);
    this->AkLaserEmitter->SetupAttachment(RootComponent);
}

void ALaserModuleNaomi::RebuildAllUnits() {
}

void ALaserModuleNaomi::OnPlayerJoinLeaveEvent(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& player_id, bool IsForcedPlayer) {
}

void ALaserModuleNaomi::HandleBeamUnblocked_Implementation(const int32 beamIndex) {
}

void ALaserModuleNaomi::HandleBeamBlocked_Implementation(const int32 beamIndex, const float blockDistance, const FVector& blockNormal, UPrimitiveComponent* blockComponent) {
}

void ALaserModuleNaomi::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ALaserModuleNaomi, LaserServerData);
}


