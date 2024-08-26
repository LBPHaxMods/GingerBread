#include "VexFinalFloorHatchController.h"
#include "Components/SceneComponent.h"
#include "CSPHelperComponent.h"
#include "Net/UnrealNetwork.h"

AVexFinalFloorHatchController::AVexFinalFloorHatchController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->CSPHelper = CreateDefaultSubobject<UCSPHelperComponent>(TEXT("CSPHelper"));
    this->TurretOpenHatchesDelay = 0.80f;
    this->TurretLiftDelay = 0.20f;
    this->TurretDropDelay = 10.00f;
    this->TurretCloseHatchesDelay = 0.20f;
    this->TurretPreDestroyDelay = 0.40f;
    this->StandardTurretClass = NULL;
    this->VexedTurretClass = NULL;
    this->TurretHeightOffsetFromPlatform = 2.00f;
    this->TurretShootStartDelay = 2.50f;
    this->TurretShootProjectileDuration = 5.00f;
    this->BombClass = NULL;
    this->BombLiftDuration = 0.50f;
    this->BombLiftHeight = 15.00f;
    this->BombLiftCurve = NULL;
    this->BombArc = 0.10f;
    this->BombMinAimOffset = 2.00f;
    this->BombMaxAimOffset = 5.00f;
}

void AVexFinalFloorHatchController::TriggerTurretLiftStartedEffects_Implementation(AVexFinalFloorHatch* Hatch, bool IsTurretVexed) {
}

void AVexFinalFloorHatchController::TriggerTurretDropStartedEffects_Implementation(AVexFinalFloorHatch* Hatch, bool IsTurretVexed) {
}

void AVexFinalFloorHatchController::TriggerBombLaunchEffects_Implementation(FVector launchLocation) {
}


void AVexFinalFloorHatchController::OnTurretHatDestroyed(ACreatinatorTurretBase* Turret) {
}


void AVexFinalFloorHatchController::OnTurretDestroyed(ACreatinatorTurretBase* Turret) {
}


void AVexFinalFloorHatchController::ActivateTurrets() {
}

void AVexFinalFloorHatchController::ActivateBombs(int32 NumberOfBombWaves) {
}

void AVexFinalFloorHatchController::AbortTurrets() {
}

void AVexFinalFloorHatchController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVexFinalFloorHatchController, Hatches);
    DOREPLIFETIME(AVexFinalFloorHatchController, Bombs);
}


