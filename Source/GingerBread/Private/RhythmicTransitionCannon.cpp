#include "RhythmicTransitionCannon.h"
#include "Net/UnrealNetwork.h"

ARhythmicTransitionCannon::ARhythmicTransitionCannon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;

    this->DebugShowTrajectory = false;
    this->ShowTrajectoryTime = 10.00f;
    this->DebugSackboyCollisionAtTargetPoint = false;
    this->SackboyCollisionAtTargetPointTime = 5.00f;
    this->LaunchSackboysOntoGloopedSurfaces = false;
    this->UseYankedAnimation = true;
    this->CollisionPredictionDistance = 10.00f;
    this->DebugShowPredictedCollision = false;
    this->Phase = ERhythmicTransitionCannonPhase::Idle;
    this->ActivationTrigger = ERhythmicTransitionCannonActivationTrigger::Collider;
    this->EstimatedFlyTime = 0.00f;
    this->TimeFactor = 1.00f;
    this->MaxTime = 5.00f;
    this->MaxRotationPerFrame = 5.00f;
    this->SackboyMovementCurve = NULL;
    this->SackboyMovementCurveDuration = 2.00f;
    this->MinimumVerticalAngleForBlendspace = 45.00f;
    this->UseArcCollisionPoint = true;
    this->CloseDistance = 3.00f;
    this->TriggerNewMusicState = false;
    this->MusicStateTransitionBeat = 1.00f;
    this->MusicStateTransitionLoop = 1.00f;
    this->MusicStateTransitionRequestBeats = 1.00f;
    this->UseCurrentSectionTransitionLoop = false;
    this->BeatMatchMode = ERhythmicTransitionCannonBeatMode::LandBeat;
    this->FirstSackboyLandBeat = 1.00f;
    this->FirstSackboyLaunchBeat = 1.00f;
    this->BeatLoop = 1.00f;
    this->SynchroniseLanding = false;
    this->MinHoldBeats = 0.00f;
    this->MinTravelBeats = 1.00f;
    this->TransitionCannonFire = NULL;
    this->EnterForceFeedback = NULL;
    this->EnterHapticsEvent = NULL;
    this->PreFireForceFeedback = NULL;
    this->PreFireHapticsEvent = NULL;
    this->CameraShakeClass = NULL;
    this->CameraShakeScale = 1.00f;
    this->TargetPoints.AddDefaulted(1);
    this->PreFireWaitTime = 0.60f;
    this->PostFireWaitTime = 0.60f;
    this->GulpTime = 0.30f;
    this->FireAnimLauchOffset = 0.10f;
    this->SackboyInviteInCollider = NULL;
    this->SackboyPrimaryActivationCollider = NULL;
    this->SackboySecondaryActivationCollider = NULL;
    this->SackboyInputCollider = NULL;
    this->SackboyInviteInInteraction = NULL;
    this->SackboyPrimaryActivationInteraction = NULL;
    this->SackboySecondaryActivationInteraction = NULL;
    this->SackboyInputInteraction = NULL;
    this->SkeletalMesh = NULL;
    this->AnimInstance = NULL;
    this->PoIComponent = NULL;
}

void ARhythmicTransitionCannon::OnRep_Phase() {
}

void ARhythmicTransitionCannon::MulticastWake_Implementation() {
}

void ARhythmicTransitionCannon::MulticastSleep_Implementation() {
}

TArray<FVector> ARhythmicTransitionCannon::GetPoints(int32 Index) {
    return TArray<FVector>();
}

void ARhythmicTransitionCannon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARhythmicTransitionCannon, Phase);
    DOREPLIFETIME(ARhythmicTransitionCannon, ActivatingSackboy);
}


