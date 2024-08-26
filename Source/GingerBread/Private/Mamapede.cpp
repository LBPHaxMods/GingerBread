#include "Mamapede.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Components/SpotLightComponent.h"
#include "Components/StaticMeshComponent.h"
#include "ActorPoolComponent.h"
#include "CSPHelperComponent.h"
#include "GameplayTagComponent.h"
#include "GlobalEventTransceiver.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "MamapedeActionComponent.h"
#include "MamapedeGroundDeformationComponent.h"
#include "MamapedeMovementComponent.h"
#include "MamapedeSpineSplineComponent.h"
#include "MamapedeVFXComponent.h"
#include "MamapedeVineSpawner.h"
#include "Net/UnrealNetwork.h"

AMamapede::AMamapede(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->RootSceneComponent = (USceneComponent*)RootComponent;
    this->MouthSM = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MouthSM2"));
    this->LeftEyeSpotlight = CreateDefaultSubobject<USpotLightComponent>(TEXT("LeftEyeSpot"));
    this->RightEyeSpotlight = CreateDefaultSubobject<USpotLightComponent>(TEXT("RighttEyeSpot"));
    this->AkMamapede = CreateDefaultSubobject<UAkComponent>(TEXT("AK Mamapede"));
    this->AkMamapedeHaptics = CreateDefaultSubobject<UAkComponent>(TEXT("AK MamapedeHaptics"));
    this->HeadBlockingCollision = CreateDefaultSubobject<USphereComponent>(TEXT("HeadBlockingCollision"));
    this->GameplayTagComponent = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTagComponent"));
    this->EyebrowCraftCutterCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("EyebrowCraftCutterCollision"));
    this->HitPointModifierCollision = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Hit Point Modifier Collision"));
    this->EyebrowHitPointModifierCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("EyebrowHitPointModifierCollision"));
    this->MouthHitPointModifierCollision = CreateDefaultSubobject<USphereComponent>(TEXT("MouthHitPointModifierCollision"));
    this->VineEatingHitPointModifierCollision = CreateDefaultSubobject<USphereComponent>(TEXT("Vine Eater"));
    this->HitPointModifierInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("Hit Point Modifier Interaction"));
    this->EyebrowHitPointModifierInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("EyebrowHitPointModifierInteraction"));
    this->MouthModifierInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("MouthModifierInteraction"));
    this->VineEatingHitPointModifierInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("Vine Eater Interaction"));
    this->VFXBurrowPoint = NULL;
    this->BodyAttachPoint = NULL;
    this->SpineSpline = CreateDefaultSubobject<UMamapedeSpineSplineComponent>(TEXT("Spine"));
    this->DestructionEventTransceiver = CreateDefaultSubobject<UGlobalEventTransceiver>(TEXT("DestructionEventTransceiver"));
    this->GroundDeformationStartLocation = CreateDefaultSubobject<USceneComponent>(TEXT("GroundDeformationStartLocation"));
    this->HeadVFXLocation = CreateDefaultSubobject<USceneComponent>(TEXT("HeadVFXLocation"));
    this->BurrowConstraintLocation = CreateDefaultSubobject<USceneComponent>(TEXT("HeadFrontLocation"));
    this->UndergroundHeadVFXComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("UndergroundHeadVFXComponent"));
    this->BodySectionPool = CreateDefaultSubobject<UActorPoolComponent>(TEXT("BodySectionPool"));
    this->VinePool = CreateDefaultSubobject<UActorPoolComponent>(TEXT("VinePool"));
    this->VineSpawner = CreateDefaultSubobject<UMamapedeVineSpawner>(TEXT("VineSpawner"));
    this->HitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
    this->VineEatingHitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("VineEatingHitPointsModifier"));
    this->ActionComponent = CreateDefaultSubobject<UMamapedeActionComponent>(TEXT("ActionComponent"));
    this->MovementComponent = CreateDefaultSubobject<UMamapedeMovementComponent>(TEXT("MovementComponent"));
    this->GroundDeformationComponent = CreateDefaultSubobject<UMamapedeGroundDeformationComponent>(TEXT("GroundDeformationComponent"));
    this->VFXComponent = CreateDefaultSubobject<UMamapedeVFXComponent>(TEXT("VFXComponent"));
    this->MovementCSPHelperComponent = CreateDefaultSubobject<UCSPHelperComponent>(TEXT("MovementCSPHelperComponent"));
    this->GroundDeformationCSPHelperComponent = CreateDefaultSubobject<UCSPHelperComponent>(TEXT("GroundDeformationCSPHelperComponent"));
    this->HurtVox = NULL;
    this->BallonDamageSFX = NULL;
    this->FinalBallonDamageSFX = NULL;
    this->GroundEmergeSFX = NULL;
    this->AboveGroundStartSFX = NULL;
    this->AboveGroundStopSFX = NULL;
    this->DiveUndergroundSFX = NULL;
    this->MoveUndergroundStartSFX = NULL;
    this->MoveUndergroundStopSFX = NULL;
    this->TransitionDiveWarningSFX = NULL;
    this->WallToWallWarningVox = NULL;
    this->WallToWallWarningSFX = NULL;
    this->WallToWallVox = NULL;
    this->WallToWallSFX = NULL;
    this->WallBurstSFX = NULL;
    this->WallBreakInSFX = NULL;
    this->VerticalHeadAppearSFX = NULL;
    this->VerticalHeadAppearVox = NULL;
    this->VerticalBurrowUpSFX = NULL;
    this->VerticalBurrowInSFX = NULL;
    this->VerticalGroundBurstSFX = NULL;
    this->VerticalAttackVoxSFX = NULL;
    this->VerticalReEnterGroundSFX = NULL;
    this->VerticalRetractSFX = NULL;
    this->RageCentreReturnToGroundSFX = NULL;
    this->RageCentreWarningSFX = NULL;
    this->RageCentrePopUpVoxSFX = NULL;
    this->RageCrackingMoveStartedSFX = NULL;
    this->RageCrackingRatchetingVoxSFX = NULL;
    this->RageCrackingInflateBodySFX = NULL;
    this->RageCrackingFloorSplitSFX = NULL;
    this->RageCrackingLeavingSFX = NULL;
    this->RageHeadPopSignpostSFX = NULL;
    this->RageHeadPopBurrowUpSFX = NULL;
    this->RageHeadPopBurrowUpVoxSFX = NULL;
    this->RageHeadPopReEnterGroundSFX = NULL;
    this->GroundDiveWarningSFX = NULL;
    this->GroundDiveExitGroundSFX = NULL;
    this->GroundDiveExitGroundVoxSFX = NULL;
    this->GroundDiveReEnterGroundSFX = NULL;
    this->GroundDiveAboveGroundStopSFX = NULL;
    this->FollowSplineWarningSFX = NULL;
    this->FollowSplineAttackVoxSFX = NULL;
    this->JumpFromWallSignpostSFX = NULL;
    this->JumpFromWallWallBurstSFX = NULL;
    this->JumpFromWallWallBursVoxSFX = NULL;
    this->JumpFromWallEnterGroundSFX = NULL;
    this->JumpFromWallJumpIntoHoleSFX = NULL;
    this->JumpFromWallWooshSFX = NULL;
    this->HurtVoxHaptic = NULL;
    this->BallonDamageHaptic = NULL;
    this->RumbleStartEventHaptic = NULL;
    this->RumbleEndEventHaptic = NULL;
    this->FinalBallonDamageHaptic = NULL;
    this->GroundEmergeHaptic = NULL;
    this->AboveGroundStartHaptic = NULL;
    this->AboveGroundStopHaptic = NULL;
    this->DiveUndergroundHaptic = NULL;
    this->MoveUndergroundStartHaptic = NULL;
    this->MoveUndergroundStopHaptic = NULL;
    this->WallToWallWarningVoxHaptic = NULL;
    this->WallToWallWarningHaptic = NULL;
    this->WallToWallVoxHaptic = NULL;
    this->WallToWallHaptic = NULL;
    this->WallBurstHaptic = NULL;
    this->WallBreakInHaptic = NULL;
    this->VerticalHeadAppearHaptic = NULL;
    this->VerticalHeadAppearVoxHaptic = NULL;
    this->VerticalBurrowUpHaptic = NULL;
    this->VerticalBurrowInHaptic = NULL;
    this->VerticalGroundBurstHaptic = NULL;
    this->VerticalAttackVoxHaptic = NULL;
    this->VerticalReEnterGroundHaptic = NULL;
    this->VerticalRetractHaptic = NULL;
    this->RageCentreReturnToGroundHaptic = NULL;
    this->RageCentreWarningHaptic = NULL;
    this->RageCentrePopUpVoxHaptic = NULL;
    this->RageCrackingMoveStartedHaptic = NULL;
    this->RageCrackingRatchetingVoxHaptic = NULL;
    this->RageCrackingFloorSplitHaptic = NULL;
    this->RageCrackingLeavingHaptic = NULL;
    this->RageHeadPopSignpostHaptic = NULL;
    this->RageHeadPopBurrowUpHaptic = NULL;
    this->RageHeadPopBurrowUpVoxHaptic = NULL;
    this->RageHeadPopReEnterGroundHaptic = NULL;
    this->GroundDiveWarningHaptic = NULL;
    this->GroundDiveExitGroundHaptic = NULL;
    this->GroundDiveExitGroundVoxHaptic = NULL;
    this->GroundDiveReEnterGroundHaptic = NULL;
    this->GroundDiveAboveGroundStopHaptic = NULL;
    this->FollowSplineWarningHaptic = NULL;
    this->FollowSplineAttackVoxHaptic = NULL;
    this->JumpFromWallSignpostHaptic = NULL;
    this->JumpFromWallWallBurstHaptic = NULL;
    this->JumpFromWallWallBursVoxHaptic = NULL;
    this->JumpFromWallEnterGroundHaptic = NULL;
    this->JumpFromWallJumpIntoHoleHaptic = NULL;
    this->JumpFromWallWooshHaptic = NULL;
    this->VerticalJumpBurrowUpVFX = NULL;
    this->VerticalJumpDropBackVFX = NULL;
    this->ExitingWallVFX = NULL;
    this->EnterWallVFX = NULL;
    this->WallDestructionVFX = NULL;
    this->GroundDiveExitGroundVFX = NULL;
    this->GroundDiveEnterGroundVFX = NULL;
    this->JumpFromWallExitWallVFX = NULL;
    this->JumpFromWallEnterGroundVFX = NULL;
    this->SplineFollowingExitGroundVFX = NULL;
    this->SplineFollowingEnterGroundVFX = NULL;
    this->RageCrackingAirSuckVFX = NULL;
    this->RageCrackingFallingDebrisVFX = NULL;
    this->RageHeadPopSignpostVFX = NULL;
    this->MamapedeShaderInteractionCollection = NULL;
    this->GroundDeformationPointSplineIntervals.AddDefaulted(4);
    this->FakeFlatGroundDeformationInterpolation = 0.75f;
    this->FakeFlatGroundDeformationInterpolationTime = 1.00f;
    this->WindSpeedMultiplierParamater = TEXT("TrunkWindSpeedMultiplier");
    this->JumpingFromWallCameraArea = NULL;
    this->WallChargeCameraArea = NULL;
    this->CameraShake = NULL;
    this->WallChargeCameraShake = NULL;
    this->JumpSignpostCameraShake = NULL;
    this->JumpCameraShake = NULL;
    this->RageCrackingCameraShake = NULL;
    this->RageCentreCameraShake = NULL;
    this->WallChargeRumble = NULL;
    this->JumpSignpostRumble = NULL;
    this->JumpRumble = NULL;
    this->RageCrackingRumble = NULL;
    this->RageCentreRumble = NULL;
    this->VerticalCollapsingGround = NULL;
    this->VerticalCollapsingGroundStartingHeight = 0.00f;
    this->HorizontalCollapsingGround = NULL;
    this->HorizontalCollapsingGroundStartingHeight = 0.00f;
    this->NumberOfSegments.AddDefaulted(4);
    this->SegmentLength = 17.50f;
    this->UndergroundTravelHeight = -15.00f;
    this->UndergroundHiddenHeight = -25.00f;
    this->InitialMamapedeSpawnHeight = -45.00f;
    this->VineSpawnMinHeight = -20.00f;
    this->MinUndergroundHeightToSpawnVFX = -20.00f;
    this->UndergroundVFXHeightOffset = 0.00f;
    this->InitialUndergroundSegmentStepping = -7.50f;
    this->SubsequentUndergroundSegmentStepping = -5.00f;
    this->SmoothMoveEaseInCurve = NULL;
    this->SmoothMoveEaseInTime = 1.00f;
    this->SmoothMoveMinResurfaceAngle = 30.00f;
    this->SmoothMoveNearSurfaceHeight = -19.00f;
    this->SmoothMoveResurfaceAngleBlendStartHeight = -22.00f;
    this->DiveDepthExtension = 40.00f;
    this->WallSpawnDistance = 25.00f;
    this->LastSectionDamagedVFXTimeDilation = 2.00f;
    this->ChaseShouldDropVines = true;
    this->MinLongChaseDuration = 6.00f;
    this->MaxLongChaseDuration = 7.00f;
    this->MinShortChaseDuration = 0.50f;
    this->MaxShortChaseDuration = 1.00f;
    this->ChaseMaxMovementSpeed = 22.50f;
    this->ChaseMinMovementSpeed = 15.00f;
    this->ChasingTolerance = 20.00f;
    this->ChasingMinYawSpeed = 55.00f;
    this->ChasingMaxYawSpeed = 55.00f;
    this->ChasingPitchSpeed = 90.00f;
    this->ChaseMinSackboyAttentionTime = 0.50f;
    this->ChaseMinPatrolAttentionTime = 0.25f;
    this->ChaseMinTimeToLeaveAfterDamage = 0.75f;
    this->ChaseMinLookAheadDistance = 20.00f;
    this->TransitionShouldDropVines = true;
    this->MaxTransitionDuration = 10.00f;
    this->TransitionMaxMovementSpeed = 27.00f;
    this->TransitionMinMovementSpeed = 10.00f;
    this->TransitionMoveTolerance = 15.00f;
    this->TransitionMinYawSpeed = 90.00f;
    this->TransitionMaxYawSpeed = 90.00f;
    this->TransitionPitchSpeed = 200.00f;
    this->TransitionDiveHorizontalDistance = 4.00f;
    this->GroundDiveHeightCurve = NULL;
    this->GroundDiveDistanceCurve = NULL;
    this->GroundDiveDepthCurve = NULL;
    this->GroundDiveShouldDropVines = true;
    this->GroundDiveStartDistanceFromArenaCentre = 35.00f;
    this->GroundDiveOvershootDistance = 50.00f;
    this->GroundDivePreStartDelay = 1.00f;
    this->GroundDiveArcDuration = 2.50f;
    this->GroundDiveDiveDurations.AddDefaulted(4);
    this->GroundDivePostDiveDelay = 1.00f;
    this->MaxGroundDiveHeight = 40.00f;
    this->GroundDiveStopExitGroundTime = 1.50f;
    this->GroundDiveStartEnterGroundTime = 2.25f;
    this->GroundDiveStopEnterGroundTime = 3.12f;
    this->VerticalJumpSignpostCurve = NULL;
    this->VerticalJumpDepthAlpha = NULL;
    this->VerticalJumpRisingHeightAlpha = NULL;
    this->VerticalJumpFallingHeightAlpha = NULL;
    this->VerticalJumpStuckHeightAlpha = NULL;
    this->VerticalJumpDistanceFromArenaCentre = 15.00f;
    this->VerticalJumpPreStartDelay = 1.50f;
    this->VerticalJumpSignpostDuration = 1.50f;
    this->VerticalJumpPostSignpostDelay = 0.50f;
    this->VerticalJumpJumpDurations.AddDefaulted(4);
    this->VerticalJumpBeginRetractTime = 0.50f;
    this->VerticalJumpReEnterGroundTime = 1.00f;
    this->VerticalJumpReEnterGroundAnimStartTime = 0.90f;
    this->VerticalJumpShockwaveSpawnTime = 3.90f;
    this->VerticalJumpSignpostHeight = 20.25f;
    this->VerticalJumpHeightExtension = 25.00f;
    this->VerticalJumpStuckHeight = 20.00f;
    this->FollowSplineShouldDropVines = true;
    this->FollowSplineSignpostDuration = 1.50f;
    this->FollowSplineSpeed = 50.00f;
    this->FollowSplineExitGroundVFXPlayDurationInterval = 0.25f;
    this->FollowSplineDiveDuration = 1.00f;
    this->FollowSplineEarlyDiveHeadRotationSpeed = 180.00f;
    this->WallChargeSignpostCurve = NULL;
    this->WallChargeHorizontalCurve = NULL;
    this->WallChargeShouldDropVines = false;
    this->NumberOfWallChargesToDo_VerticallyCracked = 2;
    this->NumberOfWallChargesToDo_CrossCracked = 4;
    this->WallChargeMinX = 30.00f;
    this->WallChargeMaxX = 100.00f;
    this->WallChargeDefaultX = 30.00f;
    this->WallChargeFromTransitionDelay = 1.00f;
    this->WallChargeDelayBetweenWallCharges = 0.50f;
    this->WallChargePostFinalChargeDelay = 1.00f;
    this->WallChargeEndSubmergeExtensionDistance = 30.00f;
    this->WallChargeStartInWallOffset = 45.00f;
    this->WallChargeSignpostDuration_VerticallyCracked = 1.75f;
    this->WallChargeSignpostDuration_CrossCracked = 1.35f;
    this->WallChargeChargeDurations_VerticallyCracked.AddDefaulted(4);
    this->WallChargeChargeDurations_CrossCracked.AddDefaulted(4);
    this->WallChargeExitWallTime = 0.50f;
    this->WallChargeReEnterWallTime = 0.50f;
    this->WallChargeDestructionVFXTime = 0.25f;
    this->WallChargeDestructionVFXHeight = 20.00f;
    this->WallChargeVFXMinY = 225.00f;
    this->WallChargeVFXMaxY = 375.00f;
    this->WallChargeWiggleSpeed = 4.00f;
    this->WallChargeWiggleAmplitude_VerticallyCracked = 7.50f;
    this->WallChargeWiggleAmplitude_CrossCracked = 5.00f;
    this->WallChargeFinishTeleportInWallDistance = 20.00f;
    this->JumpFromWallHeightCurve = NULL;
    this->JumpFromWallDistanceCurve = NULL;
    this->JumpFromWallDepthCurve = NULL;
    this->JumpFromWallPreStartDelay = 2.00f;
    this->JumpFromWallSignpostDuration = 1.00f;
    this->JumpFromWallJumpDuration = 3.50f;
    this->JumpFromWallPostJumpDelay = 1.00f;
    this->JumpFromWallSignpostMovementSpeed = 42.40f;
    this->JumpFromWallStartBackDistance = 30.00f;
    this->JumpFromWallHitGroundTime = 0.95f;
    this->JumpFromWallHitGroundAudioTime = 0.85f;
    this->JumpFromWallWooshNoiseTime = 0.55f;
    this->JumpFromWallWowMomentDelay = 1.25f;
    this->JumpFromWallCameraReturnDelay = 2.50f;
    this->RageCrackingAlphaCurve = NULL;
    this->RageCrackingPreMoveDuration = 0.50f;
    this->RageCrackingCrackingTime = 2.50f;
    this->RageCrackingLeavingTime = 4.00f;
    this->RageCrackingCrackShakeTime = 0.50f;
    this->RageCrackingAirSuckVFXTime = 0.00f;
    this->RageCrackingFallingDebrisVFXTime = 0.00f;
    this->RageCrackingAirSuckVFXHeightOffset = 0.00f;
    this->RageCrackingFallingDebrisVFXHeightOffset = 0.00f;
    this->RageCrackingInflateBalloonsTime_VerticallyCracked = 2.50f;
    this->RageCrackingInflateBalloonsTime_CrossCracked = 3.00f;
    this->RageCrackingCollapsibleFloorDownOffset = -15.00f;
    this->RageCrackingMovementSpeed = 48.00f;
    this->RageCrackingMoveTolerance = 1.00f;
    this->RageCrackingYawSpeed = 135.00f;
    this->RageCrackingPitchSpeed = 200.00f;
    this->RageCentreHeightAlphaCurve = NULL;
    this->RageCentreShakeDuration = 0.75f;
    this->RageCentreHeadPopDuration = 3.00f;
    this->RageCentrePostHeadPopDuration = 0.50f;
    this->RageCentreMaxHeight = 0.00f;
    this->RageCentreMinHeight = -50.00f;
    this->RageCentreReturnToGroundAudioTime = 2.00f;
    this->RageCentreWindSpeed_During = 1.50f;
    this->RageCentreWindSpeed_After = 0.10f;
    this->RageHeadPopHeightCurve = NULL;
    this->RageHeadPopDepthCurve = NULL;
    this->NumberOfRageHeadPops_VerticallyCracked = 3;
    this->NumberOfRageHeadPops_CrossCracked = 5;
    this->RageHeadPopStartLocationIndices_VerticallyCracked.AddDefaulted(2);
    this->RageHeadPopStartLocationIndices_CrossCracked.AddDefaulted(2);
    this->RageHeadPopInitialPreStartDuration = 2.00f;
    this->RageHeadPopSubsequentPreStartDuration = 0.00f;
    this->RageHeadPopSignpostDuration = 1.25f;
    this->RageHeadPopHeadPopDuration_VerticallyCracked = 1.50f;
    this->RageHeadPopHeadPopDuration_CrossCracked = 1.00f;
    this->RageHeadPopMaxHeight = 20.00f;
    this->RageHeadPopShockwaveSpawnTime = 1.15f;
    this->RageHeadPopReEnterGroundTime = 1.00f;
    this->SingleHitReactionAmplitudeCurve = NULL;
    this->SingleHitReactionDuration = 1.50f;
    this->SingleHitReactionAmplitude = 2.50f;
    this->SingleHitReactionSpeed = 4.00f;
    this->AllHitReactionAmplitude = 2.00f;
    this->AllHitReactionSpeed = 4.00f;
    this->DeathTimeDilation = 0.02f;
    this->DeathTimeDilationDuration = 2.00f;
    this->CurrentNumberOfPlayers = 0;
    this->DesiredBodySectionCount = 0;
    this->FightPhase = EMamapedeFightPhase::Invalid;
    this->EyeLightsActive = false;
    this->AkMamapedeHaptics->SetupAttachment(MouthSM);
    this->HeadBlockingCollision->SetupAttachment(MouthSM);
    this->GameplayTagComponent->SetupAttachment(HeadBlockingCollision);
    this->EyebrowCraftCutterCollision->SetupAttachment(MouthSM);
    this->HitPointModifierCollision->SetupAttachment(MouthSM);
    this->EyebrowHitPointModifierCollision->SetupAttachment(MouthSM);
    this->MouthHitPointModifierCollision->SetupAttachment(MouthSM);
    this->VineEatingHitPointModifierCollision->SetupAttachment(MouthSM);
    this->HitPointModifierInteraction->SetupAttachment(MouthSM);
    this->EyebrowHitPointModifierInteraction->SetupAttachment(MouthSM);
    this->MouthModifierInteraction->SetupAttachment(MouthSM);
    this->VineEatingHitPointModifierInteraction->SetupAttachment(MouthSM);
    this->SpineSpline->SetupAttachment(RootComponent);
    this->GroundDeformationStartLocation->SetupAttachment(MouthSM);
    this->HeadVFXLocation->SetupAttachment(MouthSM);
    this->BurrowConstraintLocation->SetupAttachment(MouthSM);
    this->UndergroundHeadVFXComponent->SetupAttachment(MouthSM);
    this->MouthSM->SetupAttachment(RootComponent);
    this->AkMamapede->SetupAttachment(MouthSM);
}

void AMamapede::PostRumbleEvent_Implementation(UForceFeedbackEffect* RumbleEvent) {
}

void AMamapede::PostHapticEvent_Implementation(UAkAudioEvent* AkEvent) {
}

void AMamapede::PostAKEvent_Implementation(UAkAudioEvent* AkEvent) {
}

void AMamapede::OnRep_EyeLightsActive() {
}

void AMamapede::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMamapede, VerticalCollapsingGround);
    DOREPLIFETIME(AMamapede, VerticalCollapsingGroundStartingHeight);
    DOREPLIFETIME(AMamapede, HorizontalCollapsingGround);
    DOREPLIFETIME(AMamapede, HorizontalCollapsingGroundStartingHeight);
    DOREPLIFETIME(AMamapede, MovementArenaBoundsVolume);
    DOREPLIFETIME(AMamapede, VineArenaBoundsVolume);
    DOREPLIFETIME(AMamapede, PossibleFollowSplines);
    DOREPLIFETIME(AMamapede, CurrentNumberOfPlayers);
    DOREPLIFETIME(AMamapede, DesiredBodySectionCount);
    DOREPLIFETIME(AMamapede, FightPhase);
    DOREPLIFETIME(AMamapede, ArenaCentreLocation);
    DOREPLIFETIME(AMamapede, EyeLightsActive);
}


