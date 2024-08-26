#include "RhythmicLaserModule.h"
#include "AkComponent.h"
#include "Components/SceneComponent.h"
#include "HitPointsModifierComponent.h"
#include "Net/UnrealNetwork.h"
#include "TriggerActorComponent.h"

ARhythmicLaserModule::ARhythmicLaserModule(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
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
    this->LaserType = ERhythmicLaserModuleType::LineTracedLaser;
    this->AudioType = ERhythmicLaserAudioType::Static;
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
    this->ModuleStaticMesh = NULL;
    this->ApertureStaticMesh = NULL;
    this->RingStaticMesh = NULL;
    this->BeamStaticMesh = NULL;
    this->BurnStaticMesh = NULL;
    this->ModuleMaterial = NULL;
    this->ApertureMaterial = NULL;
    this->RingMaterial = NULL;
    this->BeamMaterial = NULL;
    this->DropLightMaterial = NULL;
    this->BurnDecalMaterial = NULL;
    this->BurnMaterial = NULL;
    this->BurnParticles = NULL;
    this->IsAwake = false;
    this->IsActivated = true;
    this->IsToggleOn = false;
    this->AkLaserEmitter->SetupAttachment(RootComponent);
}

void ARhythmicLaserModule::RebuildAllUnits() {
}

void ARhythmicLaserModule::OnRep_IsToggleOn() {
}

void ARhythmicLaserModule::OnRep_IsAwake() {
}

void ARhythmicLaserModule::OnRep_IsActivated() {
}

void ARhythmicLaserModule::HandleBeamUnblocked_Implementation(const int32 beamIndex) {
}

void ARhythmicLaserModule::HandleBeamBlocked_Implementation(const int32 beamIndex, const float blockDistance, const FVector& blockNormal, UPrimitiveComponent* blockComponent) {
}

void ARhythmicLaserModule::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARhythmicLaserModule, IsAwake);
    DOREPLIFETIME(ARhythmicLaserModule, IsActivated);
    DOREPLIFETIME(ARhythmicLaserModule, IsToggleOn);
}


