#include "TransitionCannon.h"
#include "CSPHelperComponent.h"
#include "Net/UnrealNetwork.h"

ATransitionCannon::ATransitionCannon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;

    this->DebugShowTrajectory = false;
    this->ShowTrajectoryTime = 10.00f;
    this->DebugSackboyCollisionAtTargetPoint = false;
    this->SackboyCollisionAtTargetPointTime = 5.00f;
    this->LaunchSackboysOntoGloopedSurfaces = false;
    this->CollisionPredictionDistance = 10.00f;
    this->CSPLaunch = false;
    this->DebugShowPredictedCollision = false;
    this->Phase = ETransitionCannonPhase::Idle;
    this->ActivationTrigger = ECannonActivationTrigger::Collider;
    this->EstimatedFlyTime = 0.00f;
    this->TimeFactor = 1.00f;
    this->MaxTime = 5.00f;
    this->MaxRotationPerFrame = 5.00f;
    this->SackboyMovementCurve = NULL;
    this->SackboyMovementCurveDuration = 2.00f;
    this->MinimumVerticalAngleForBlendspace = 45.00f;
    this->IsMovedIntoPlayspace = false;
    this->Enabled = true;
    this->UseArcCollisionPoint = true;
    this->CloseDistance = 3.00f;
    this->ArcPeakModifier = 0.50f;
    this->EnterForceFeedback = NULL;
    this->EnterHapticsEvent = NULL;
    this->PreFireForceFeedback = NULL;
    this->PreFireHapticsEvent = NULL;
    this->CameraShakeClass = NULL;
    this->CameraShakeScale = 1.00f;
    this->TargetPoints.AddDefaulted(1);
    this->PreFireWaitTime = 1.50f;
    this->PostFireWaitTime = 0.60f;
    this->GulpTime = 0.30f;
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
    this->CSPHelperComp = CreateDefaultSubobject<UCSPHelperComponent>(TEXT("CSPHelper"));
    this->bNetworkHostInputOnly = false;
}

void ATransitionCannon::OnRep_Phase() {
}

void ATransitionCannon::OnCSPAction(uint32 Type) {
}

void ATransitionCannon::MulticastWake_Implementation() {
}

void ATransitionCannon::MulticastSleep_Implementation() {
}

void ATransitionCannon::MulticastSBCannon_Implementation(ASackboy* Sackboy) {
}

TArray<FVector> ATransitionCannon::GetPoints(int32 Index) {
    return TArray<FVector>();
}

void ATransitionCannon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATransitionCannon, Phase);
    DOREPLIFETIME(ATransitionCannon, ActivatingSackboy);
}


