#include "SackboyAnimInstance.h"

USackboyAnimInstance::USackboyAnimInstance() {
    this->FlutterHeavyRollerFail = false;
    this->GrabVelocityRight = 0.00f;
    this->GrabVelocityForward = 0.00f;
    this->StruggleAmountRight = 0.00f;
    this->StruggleAmountForward = 0.00f;
    this->StruggleAnimBlend = 0.00f;
    this->GrabConveyorBeltSpeed = 0.00f;
    this->GrabConveyorStrafeSpeed = 0.00f;
    this->GrabConveyorLeanDirection = 0.00f;
    this->GrabConveyorLeanBlend = 0.00f;
    this->GrabRocketIsGrounded = true;
    this->GrabRocketIsMoving = false;
    this->GrabSpinningWheelSpeed = 0.00f;
    this->GrabSpinningWheelStrafeSpeed = 0.00f;
    this->VelocityForwardsAxisBlend = 0.00f;
    this->VelocityRightAxisBlend = 0.00f;
    this->AirSteerForwards = 0.00f;
    this->AirSteerTurning = 0.00f;
    this->BlastersRollStomp = false;
    this->BlastersHoverAirSteerForwards = 0.00f;
    this->BlastersHoverAirSteerTurning = 0.00f;
    this->IsInGloopMode = false;
    this->WalkStyle = ESackboyAnimWalkStyle::Standard;
    this->WalkSpeed = 0.00f;
    this->MaxWalkSpeedForBlendSpace = -1.00f;
    this->SwimSpeed = 0.00f;
    this->StrafeSpeed = 0.00f;
    this->WalkTurn = 0.00f;
    this->GrabbingFloor = false;
    this->WalkInputForward = 0.00f;
    this->WalkInputSide = 0.00f;
    this->RunPlayingRatio = 0.00f;
    this->FallType = ESackboyFallType::Normal;
    this->BouncePadAnim = ESackboyAnimBouncePad::BouncePad0;
    this->InitialFallComplete = false;
    this->BigFallComplete = false;
    this->LandedHeavy = false;
    this->JumpIsFromRoll = false;
    this->UmbrellaFloatState = ESackboyUmbrellaFloatState::StandardFloat;
    this->WalkAnimSpeedFactor = 1.00f;
    this->RollExiting = false;
    this->RollExitingFromTunnel = false;
    this->RollExitToRun = 0.00f;
    this->JustRolling = false;
    this->RollLanding = false;
    this->RollSpeed = 1.00f;
    this->RollTurn = 0.00f;
    this->RollTurnIncTime = 0.12f;
    this->RollTurnDecTime = 0.20f;
    this->StrugglePlayRateAlpha = 1.00f;
    this->RollStompHeadBanger = false;
    this->RollDazeState = ESackboyRollDazeState::KnockBack;
    this->RollDazeFromHit = false;
    this->RollDazeHitSpinCW = false;
    this->SackboyMesh = NULL;
    this->CraftState = ESackboyAnimCraft::None;
    this->CarryingItem = false;
    this->WearingPowergloves = false;
    this->ThreadState = ESackboyAnimThread::None;
    this->PlaceLow = false;
    this->AnimLeftFootDown = false;
    this->AnimRightFootDown = false;
    this->PelvisOffsetAlpha = 0.00f;
    this->PelvisOffsetActive = false;
    this->PelvisApplySpeedMin = 5.00f;
    this->PelvisApplySpeedMax = 15.00f;
    this->LegLength = 1.52f;
    this->ArmLength = 1.71f;
    this->ApplyHandIK = false;
    this->LeftHandAnimTransformValid = false;
    this->PrevLeftHandAnimTransformValid = false;
    this->RightHandAnimTransformValid = false;
    this->PrevRightHandAnimTransformValid = false;
    this->LeftHandTargetValid = false;
    this->RightHandTargetValid = false;
    this->LeftHandAlpha = 0.00f;
    this->RightHandAlpha = 0.00f;
    this->LedgeGrabApplyHandIK = false;
    this->BlinkIntoTime = 0.04f;
    this->BlinkDuration = 0.20f;
    this->BlinkOutTime = 0.04f;
    this->BlinkMinWait = 1.25f;
    this->BlinkMaxWait = 2.50f;
    this->BlinkWaitDuration = 2.00f;
    this->SwingSideways = 0.00f;
    this->SwingForwards = 0.00f;
    this->SwingVertical = false;
    this->EmoteInto = NULL;
    this->EmoteLoop = NULL;
    this->EmoteExit = NULL;
    this->EmoteFail = NULL;
    this->EmoteSuccess = NULL;
    this->EmoteRespondInto = NULL;
    this->EmoteRespondExit = NULL;
    this->PlayEmoteExit = false;
    this->PlayEmoteFailed = false;
    this->PlayEmoteSucceeded = false;
    this->PlayEmoteResponse = false;
    this->HasEmoteResponseOut = false;
    this->PlayEmoteLoop = false;
    this->PlayIntoEmote = false;
    this->EmoteLoopPlayRate = 1.00f;
    this->EmoteIntoPlayRate = 1.00f;
    this->GrabbedState = ESackboyAnimGrabbedState::Grabbed;
    this->GrabbedAngle = 0.00f;
    this->GrabFailed = false;
    this->GrabbingLeftHand = false;
    this->GrabbingRightHand = false;
    this->TurnLeanMinSpeed = 20.00f;
    this->TurnLeanDetectionTime = 0.09f;
    this->TurningMaxAngSpeed = 170.00f;
    this->WalkTurnIncTime = 0.05f;
    this->WalkTurnDecTime = 0.12f;
    this->WalkSpeedIncTime = 0.10f;
    this->WalkSpeedDecTime = 0.05f;
    this->NormalWalkStateName = TEXT("Normal Walk State Machine");
    this->RunStopSpeed = 28.80f;
    this->RunStopSpeedOnWorldMap = 56.00f;
    this->FastStopSpeed = 34.00f;
    this->FastStopSpeedOnWorldMap = 64.00f;
    this->PushingMaxStrafeSpeed = 6.00f;
    this->FallingTimeThreshold = 0.15f;
    this->SmallFallTimeThreshold = 1.00f;
    this->SwitchToBigFallTime = 0.50f;
    this->SwitchToFlailFallTime = 0.50f;
    this->DebugLandingSpeed = false;
    this->NormalLandingThreshold = 20.00f;
    this->AdditiveAnimationMinTime = 0.08f;
    this->AirSteerMaxTurnSpeed = 128.00f;
    this->AirSteerDetectionTime = 0.10f;
    this->LookYaw = 0.00f;
    this->LookPitch = 0.00f;
    this->LookAlpha = 0.00f;
    this->MaxYaw = 90.00f;
    this->MaxPitch = 45.00f;
    this->MinYaw = 75.00f;
    this->MinPitch = 35.00f;
    this->FOVYaw = 90.00f;
    this->FOVPitch = 90.00f;
    this->YawSmoothing = 180.00f;
    this->PitchSmoothing = 360.00f;
    this->POIGatherRadius = 48.00f;
    this->MinFocusTime = 0.75f;
    this->POISearchEnabled = true;
    this->POISwitchScoreThreshold = 2.00f;
    this->DebugDrawPOISelection = false;
    this->DebugLogPoIChange = false;
    this->AllowedToSpecialIdle = true;
    this->ActingRightArmBlend = 0.00f;
    this->ActingLeftArmBlend = 0.00f;
    this->ActingRightHandBlend = 0.00f;
    this->ActingLeftHandBlend = 0.00f;
    this->LeftHandBlendSpace = NULL;
    this->RightHandBlendSpace = NULL;
    this->ActingArmsActive = false;
    this->CurrentLeftHandState = ESackboyActingHandState::Openhanded;
    this->CurrentRightHandState = ESackboyActingHandState::Openhanded;
    this->JumpIsPowerGloveCarry = false;
    this->bIsInWorldMap = false;
    this->bIsHudSackboy = false;
    this->bPlayFidgetsInHud = true;
    this->EnterSnowball = false;
    this->ExitSnowball = false;
    this->SnowballIsInAir = false;
    this->SnowballIsBoosting = false;
    this->SnowballTurnValue = 0.00f;
    this->SnowballSpeedValue = 0.00f;
    this->SackboyState = ESackboyAnimState::Spawning;
    this->PreviousSackboyState = ESackboyAnimState::Spawning;
    this->OnGroundState = ESackboyAnimOnGroundState::Idle;
    this->PreviousOnGroundState = ESackboyAnimOnGroundState::Idle;
    this->LayeredBlendWeight = 0.00f;
    this->LayeredHeadBlendWeight = 0.00f;
    this->LayeredAnimState = ESackboyLayeredAnimState::NoAnim;
    this->AdditiveBlendWeight = 0.00f;
    this->AdditiveAnimState = ESackboyAdditiveAnimState::NoAnim;
    this->FacialBlendWeight = 0.00f;
    this->CurrentEmotionalState = ESackboyEmotionalState::Neutral;
    this->CurrentEmotionalLevel = 0;
    this->ChangedEmotionalLevel = false;
    this->BlinkAlpha = 0.00f;
    this->CurrentControlMode = EControlMode::None;
    this->SpawnType = ESackboySpawnAnimType::FirstTime;
    this->HasSpawned = false;
    this->SpawnAnimPlayRate = 1.00f;
    this->JumpToEnterAnimPlayRate = 1.00f;
    this->EnterSpawningState = false;
    this->ExitSpawningState = false;
    this->RetriggerSpawningState = false;
    this->EnterTetherSpawningState = false;
    this->ExitTetherSpawningState = false;
    this->EnterOnGroundState = false;
    this->EnterOnGroundStateFastBlend = false;
    this->ExitOnGroundState = false;
    this->EnterRoll = false;
    this->ExitRoll = false;
    this->EnterGroundPound = false;
    this->ExitGroundPound = false;
    this->GroundPoundType = ESackboyGroundPoundType::HeadStomp;
    this->GroundPoundImpact = false;
    this->GroundPoundRecover = false;
    this->GroundPoundDiving = false;
    this->EnterWalking = false;
    this->EnterWalkingSlowBlend = false;
    this->ExitWalking = false;
    this->PlayingIntoWalk = false;
    this->IntoWalkType = ESackboyAnimIntoWalkType::FromIdleToRun;
    this->IntoWalkFromBackType = ESackboyAnimIntoWalkFromBackType::FromBackBackwards;
    this->IntoWalkStandingTurnType = ESackboyAnimIntoWalkStandingTurnType::Turn180Left;
    this->IntoWalkStandingTurnSpeed = 0.00f;
    this->EnterIdle = false;
    this->ExitIdle = false;
    this->PlayingIntoIdle = false;
    this->IdleLoopBlendTime = 0.25f;
    this->IntoIdleType = ESackboyAnimIntoIdleType::NoInto;
    this->PlayIdleStop = false;
    this->PlayIdleStopRightFootForward = false;
    this->PlayIdleStopStartPos = 0.00f;
    this->PlayIdleFromSkidding = false;
    this->EndIntoIdleFromSkidding = false;
    this->IntoIdleFromJumpFall = ESackboyAnimIntoIdleFromJumpLandState::Standard;
    this->IdleLoopType = ESackboyAnimIdleLoopType::IdleLoop;
    this->IdleBalanceForwards = 0.00f;
    this->IdleBalanceSideways = 0.00f;
    this->AdditiveIdleWeight = 0.00f;
    this->PlayIdleFidget = false;
    this->PlayIdleSleepy = false;
    this->PlayIdleSleepyIdle = false;
    this->PlayIdleLeftAlone = false;
    this->PlayIdleLeftAloneMakeSomething = false;
    this->IdleLoopMinTime = 4.00f;
    this->IdleLoopMaxTime = 8.00f;
    this->IdleLoopEmotionMinTime = 3.00f;
    this->IdleLoopEmotionMaxTime = 6.00f;
    this->IdleLoopSleepyIdleMinTime = 4.00f;
    this->IdleLoopSleepyIdleMaxTime = 6.00f;
    this->IdleLoopSleepyMinTime = 12.00f;
    this->IdleLoopSleepyMaxTime = 16.00f;
    this->IdleSittingMinLoops = 1;
    this->IdleSittingMaxLoops = 4;
    this->IdleSittingMakeAnim = NULL;
    this->IdleSittingRevealAnim = NULL;
    this->IdleSittingItem = NULL;
    this->EnterJetpack = false;
    this->ExitJetpack = false;
    this->JetpackMode = ESackboyAnimJetpackMode::Idle;
    this->EnterUTurn = false;
    this->ExitUTurn = false;
    this->UTurnClockwise = false;
    this->UTurnType = ESackboyUTurnStyle::Short;
    this->EnterSliding = false;
    this->ExitSliding = false;
    this->SlidingOnBelly = false;
    this->SlidingSurfing = false;
    this->EnterFloatState = false;
    this->ExitFloatState = false;
    this->PlayIntoFloatAnimation = false;
    this->IntoFloatMode = ESackboyIntoFloatAnimMode::None;
    this->FloatMode = ESackboyFloatAnimMode::Tumble;
    this->FloatPlayRate = 1.00f;
    this->FloatStartPosition = 0.00f;
    this->FloatTumbleStruggleBlend = 0.00f;
    this->FloatBubbleSlapTrigger = false;
    this->FloatBubbleRollOnSpotTrigger = false;
    this->FloatBubbleGrappleTrigger = false;
    this->EnterVehicleRidingState = false;
    this->ExitVehicleRidingState = false;
    this->VehicleSteerForwardsBlend = 0.00f;
    this->VehicleSteerSidewaysBlend = 0.00f;
    this->VehicleRidingType = ESackboyAnimVehicleRidingType::Driving;
    this->EnterPogoStickState = false;
    this->ExitPogoStickState = false;
    this->PogoStickLaunched = false;
    this->PogoStickBigJump = false;
    this->PogoStickEvade = false;
    this->PogoStickHeadStomp = false;
    this->PogoStickHeadStompLanded = false;
    this->PogoStickHeadStompBounced = false;
    this->EnterAwaitingCopterState = false;
    this->ExitAwaitingCopterState = false;
    this->CopterWithinRange = false;
    this->EnterUmbrellaState = false;
    this->ExitUmbrellaState = false;
    this->UmbrellaTurning = 0.00f;
    this->UmbrellaSpeed = 0.00f;
    this->EnterUnicycleState = false;
    this->ExitUnicycleState = false;
    this->UnicycleIdle = false;
    this->UnicycleRolling = false;
    this->UnicycleJumping = false;
    this->UnicycleLanded = false;
    this->UnicycleBoosting = false;
    this->UnicycleStomping = false;
    this->UnicycleStompLanding = false;
    this->UnicycleForwards = 0.00f;
    this->UnicycleSteering = 0.00f;
    this->EnterSlapState = false;
    this->ExitSlapState = false;
    this->SlapTurnLeft = false;
    this->SlapTurnRight = false;
    this->FirstSlap = false;
    this->SecondSlap = false;
    this->FinishingSlap = false;
    this->HoldingWeapon = false;
    this->SlapType = ESackboySlapType::OnGround;
    this->IntoSlapType = ESackboySlapType::OnGround;
    this->AlternativeSlapType = ESackboySlap::FirstSlap;
    this->SlapOnGround = 0.00f;
    this->PoweringUpSlap = false;
    this->SlapSpinningTop = false;
    this->RestartSlap = false;
    this->SlapTransition = false;
    this->IntoSuperSlapReady = false;
    this->EnterThrowItem = false;
    this->ExitThrowItem = false;
    this->PoweringUpThrowItem = false;
    this->ThrowItemInAir = false;
    this->ThrowItemOnGround = 1.00f;
    this->ThrowItemStartedInHand = false;
    this->IsThrowFromRoll = false;
    this->BlasterPulse = false;
    this->BlasterPulseInAir = false;
    this->BlasterRecoil = false;
    this->BlasterInstantThrow = false;
    this->ThrowItemTurnLeft = false;
    this->ThrowItemTurnRight = false;
    this->TargetPitchBlend = 0.00f;
    this->InAirRangedPickup = false;
    this->InAirCast = false;
    this->SwingSpeedBlend = 0.00f;
    this->SwingStruggleBlend = 0.00f;
    this->TugForwardSpeedBlend = 0.00f;
    this->TugSidewaysSpeedBlend = 0.00f;
    this->EnterCasting = false;
    this->ExitCasting = false;
    this->EnterSwinging = false;
    this->ExitSwinging = false;
    this->EnterRangedPickup = false;
    this->ExitRangedPickup = false;
    this->EnterTugging = false;
    this->ExitTugging = false;
    this->EnterJumpState = false;
    this->ExitJumpState = false;
    this->PlayingIntoJump = false;
    this->IntoJumpType = ESackboyAnimIntoJumpType::JumpFromStanding;
    this->JumpIsFromSlap = false;
    this->JumpIsFromEvade = false;
    this->JumpIsFromOnBack = false;
    this->JumpIsSliding = false;
    this->JumpIsBlastersBoost = false;
    this->JumpIsBlastersHover = false;
    this->JumpIsBlastersHoverFail = false;
    this->RollJumpStart = 0.00f;
    this->JumpIsMoving = false;
    this->JumpTrigger = false;
    this->JumpIsSecondJump = false;
    this->FlutterJumpState = ESackboyFlutterJumpState::StandardFlutter;
    this->JumpIsSwingJump = false;
    this->MovingJumpVariationIndex = -1;
    this->NumMovingJumpVariations = 4;
    this->EnterFallingState = false;
    this->ExitFallingState = false;
    this->EnterFallingStateFastBlend = false;
    this->ReTriggerFallingState = false;
    this->WaitingForRollStompRecover = false;
    this->EnterEmoteState = false;
    this->ExitEmoteState = false;
    this->ReTriggerEmoteState = false;
    this->EnterAnimSequenceState = false;
    this->ExitAnimSequenceState = false;
    this->AnimSequence = NULL;
    this->EnterRollRidingState = false;
    this->ExitRollRidingState = false;
    this->EnterHitReactionsState = false;
    this->ExitHitReactionsState = false;
    this->ReTriggerHitReactionsState = false;
    this->CurrentHitReaction = ESackboyHitReactionAnim::Hit_Small;
    this->CurrentHitRecovery = ESackboyHitReactionRecovery::LargeRoll;
    this->HitReactionComplete = false;
    this->InHitRecovery = false;
    this->IsHitReactionInAir = false;
    this->HitReactionDirection = ESackboyHitReactionDirection::HitFront;
    this->EnterSackboyBouncedOnMe = false;
    this->ExitSackboyBouncedOnMe = false;
    this->EnterHeadshake = false;
    this->ExitHeadshake = false;
    this->EnterAdditiveHitReaction = false;
    this->ExitAdditiveHitReaction = false;
    this->EnterAdditiveActingArms = false;
    this->ExitAdditiveActingArms = false;
    this->EnterAdditiveGrabStrain = false;
    this->ExitAdditiveGrabStrain = false;
    this->EnterAdditiveGrabbedStruggle = false;
    this->ExitAdditiveGrabbedStruggle = false;
    this->EnterAdditiveNormalLanding = false;
    this->ExitAdditiveNormalLanding = false;
    this->EnterAdditiveRollJumpLanding = false;
    this->ExitAdditiveRollJumpLanding = false;
    this->EnterAdditiveCarryingHeavyObject = false;
    this->ExitAdditiveCarryingHeavyObject = false;
    this->EnterYanked = false;
    this->ExitYanked = false;
    this->YankedDelayed = false;
    this->EnterCarried = false;
    this->ExitCarried = false;
    this->CarriedStruggle = 0.00f;
    this->EnterThrown = false;
    this->ExitThrown = false;
    this->EnterThrow = false;
    this->ExitThrow = false;
    this->ThrowIsBlastersHoverThrow = false;
    this->EnterSwing = false;
    this->ExitSwing = false;
    this->EnterCannon = false;
    this->ExitCannon = false;
    this->CannonFiredBall = false;
    this->CannonFiredSpread = false;
    this->EnterLedgeGrab = false;
    this->ExitLedgeGrab = false;
    this->PullingUpLedgeGrab = false;
    this->HangingOnLedgeGrab = false;
    this->LedgeGrabLeftHandDown = false;
    this->LedgeGrabRightHandDown = false;
    this->LedgeGrabBothHandsDown = false;
    this->EnterGrab = false;
    this->ExitGrab = false;
    this->EnterGrabConveyor = false;
    this->ExitGrabConveyor = false;
    this->EnterGrabRocket = false;
    this->ExitGrabRocket = false;
    this->EnterGrabDangle = false;
    this->ExitGrabDangle = false;
    this->EnterGrabSpinningWheel = false;
    this->ExitGrabSpinningWheel = false;
    this->FastGrabSpinningWheel = false;
    this->GrabSpinningWheelFlat = false;
    this->GrabSpinngWheelType = ESackboyGrabWheelType::FlatWheel;
    this->GrabSpinningWheelAngle = 0.00f;
    this->EnterDying = false;
    this->ExitDying = false;
    this->DyingState = ESackboyAnimDyingState::StandardDeath;
    this->EnterPickup = false;
    this->ExitPickup = false;
    this->PickupState = ESackboyAnimPickupState::Pickup;
    this->EnterPrepareToCatchCraftCutter = false;
    this->ExitPrepareToCatchCraftCutter = false;
    this->EnterCatchCraftCutter = false;
    this->ExitCatchCraftCutter = false;
    this->EnterStowCraftCutter = false;
    this->ExitStowCraftCutter = false;
    this->EnterLayeredDizzy = false;
    this->ExitLayeredDizzy = false;
    this->EnterUpperBodyThrowItem = false;
    this->ExitUpperBodyThrowItem = false;
    this->EnterUpperBodyDropToy = false;
    this->ExitUpperBodyDropToy = false;
    this->EnterUpperBodyHitReaction = false;
    this->ExitUpperBodyHitReaction = false;
    this->UpperBodyHitReactionDirection = ESackboyHitReactionDirection::HitFront;
    this->EnterUpperBodyFireBlasters = false;
    this->ExitUpperBodyFireBlasters = false;
    this->EnterUpperBodyReadyToSlap = false;
    this->ExitUpperBodyReadyToSlap = false;
    this->UpperBodySlapState = ESackboyUpperBodySlapState::FirstSlap;
    this->EnterUpperBodyAnimSequence = false;
    this->ExitUpperBodyAnimSequence = false;
    this->UpperBodyAnimSequence = NULL;
    this->EnterUpperBodyEmote = false;
    this->ExitUpperBodyEmote = false;
    this->EnterPodEntry = false;
    this->ExitPodEntry = false;
    this->PlayerSlot = EPlayerSlot::PLAYER_SLOT_INVALID;
    this->EnterJumpToEnter = false;
    this->ExitJumpToEnter = false;
    this->EnterCostumeShopEntry = false;
    this->ExitCostumeShopEntry = false;
    this->WobbleAlpha = 0.00f;
    this->CanLookAtMyself = false;
    this->OnFlaglines = false;
    this->RightFootIsDown = false;
    this->LeftFootIsDown = false;
}

void USackboyAnimInstance::UpdateExternallyControlledLookat(UPoIComponent* PoIComponent, const FTransform& WorldHeadTransform) {
}

void USackboyAnimInstance::UpdateEmoteHoldItem() {
}

void USackboyAnimInstance::UpdateAnimations() {
}

void USackboyAnimInstance::SetupIdle(bool useEmotionBody, bool justIdle, bool playLeftAlone, bool allowedToFidget) {
}

void USackboyAnimInstance::SetFacialAnimationState(const ESackboyEmotionalState State, int32 EmotionalLevel) {
}

void USackboyAnimInstance::OnUTurnStarted() {
}

void USackboyAnimInstance::OnPickupAnimReady() {
}

void USackboyAnimInstance::OnHitReactionStarted() {
}

bool USackboyAnimInstance::IsInWorldMap() const {
    return false;
}

ASackboy* USackboyAnimInstance::GetSackboy() const {
    return NULL;
}

bool USackboyAnimInstance::GetIsSkidding() const {
    return false;
}

bool USackboyAnimInstance::GetEmoteAnimSequence(int32 EmoteID, UAnimSequence*& intro, UAnimSequence*& Loop, UAnimSequence*& Exit) {
    return false;
}

float USackboyAnimInstance::GetCurrentRunPlayRatio() {
    return 0.0f;
}

void USackboyAnimInstance::DebugLog() {
}

void USackboyAnimInstance::ClearEmoteItem() {
}

void USackboyAnimInstance::ApplyAimOffset() {
}


