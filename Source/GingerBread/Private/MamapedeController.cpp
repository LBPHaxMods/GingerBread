#include "MamapedeController.h"
#include "Components/SceneComponent.h"
#include "MamapedeShockwaveManagerComponent.h"
#include "Net/UnrealNetwork.h"

AMamapedeController::AMamapedeController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->MamapedeShockwaveManager = CreateDefaultSubobject<UMamapedeShockwaveManagerComponent>(TEXT("MamapedeShockwaveManager"));
    this->FloorCloseStartPos = NULL;
    this->FloorFarEndPos = NULL;
    this->FloorLeftStartPos = NULL;
    this->FloorRightEndPos = NULL;
    this->FloorSplitCollision1 = NULL;
    this->FloorSplitCollision2 = NULL;
    this->ArenaBoundsVolume_WholeArena = NULL;
    this->ArenaBoundsVolume_Vines_VerticallyCracked = NULL;
    this->ArenaBoundsVolume_Vines_CrossCracked = NULL;
    this->ArenaBoundsVolume_AwayFromCracks = NULL;
    this->ArenaBoundsVolume_AwayFromCracksUpper = NULL;
    this->ArenaCentreActor = NULL;
    this->LeftSide = NULL;
    this->RightSide = NULL;
    this->WallJumpStart = NULL;
    this->CamAreaWowMoment = NULL;
    this->CamAreaWallCharge = NULL;
    this->ActorWithSplineComponent = NULL;
    this->CameraTarget = NULL;
    this->Checkpoint = NULL;
    this->MamapedeClass = NULL;
    this->FightStarted = false;
    this->State = EMamapedeControllerState::Invalid;
    this->HealthUIEnabled = false;
    this->HealthUIFill = 1.00f;
    this->Mamapede = NULL;
    this->Server_PhasesDefeated = 0;
}

void AMamapedeController::WallChargeTransitionComplete(EMamapedeActivity ActivityFinished) {
}

void AMamapedeController::WallChargeComplete(EMamapedeActivity ActivityFinished) {
}

void AMamapedeController::VerticalJumpTransitionComplete(EMamapedeActivity ActivityFinished) {
}

void AMamapedeController::VerticalJumpComplete(EMamapedeActivity ActivityFinished) {
}


void AMamapedeController::TriggerRageRumble_Implementation(EMamapedeFightPhase FightPhase) {
}

void AMamapedeController::TriggerMamapedeDefeated_Implementation() {
}

void AMamapedeController::TriggerBlackBars_Implementation() {
}

void AMamapedeController::StartFight() {
}

void AMamapedeController::SpawnShockwave() {
}


void AMamapedeController::SetTimeDilation_Implementation(float TimeDilation) {
}




void AMamapedeController::RageComplete(EMamapedeActivity ActivityFinished) {
}

void AMamapedeController::OnRep_PhasesDefeated() {
}

void AMamapedeController::OnRep_Mamapede() {
}

void AMamapedeController::OnRep_HealthUIFill() {
}

void AMamapedeController::OnRep_HealthUIEnabled() {
}

void AMamapedeController::OnRep_FightStarted() {
}

void AMamapedeController::OnRageCentreStartMovement() {
}

void AMamapedeController::MamapedePhaseDefeated() {
}

void AMamapedeController::MamapedeDamaged(float PhaseHealthInterval) {
}

void AMamapedeController::GroundDiveTransitionComplete(EMamapedeActivity ActivityFinished) {
}

void AMamapedeController::GroundDiveComplete(EMamapedeActivity ActivityFinished) {
}

void AMamapedeController::FollowSplineTransitionComplete(EMamapedeActivity ActivityFinished) {
}

void AMamapedeController::FollowSplineComplete(EMamapedeActivity ActivityFinished) {
}


void AMamapedeController::Debug_SkipPhase() {
}

void AMamapedeController::ChaseComplete(EMamapedeActivity ActivityFinished) {
}

void AMamapedeController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMamapedeController, FightStarted);
    DOREPLIFETIME(AMamapedeController, HealthUIEnabled);
    DOREPLIFETIME(AMamapedeController, HealthUIFill);
    DOREPLIFETIME(AMamapedeController, Mamapede);
    DOREPLIFETIME(AMamapedeController, Server_PhasesDefeated);
}


