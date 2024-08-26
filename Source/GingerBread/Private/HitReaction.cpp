#include "HitReaction.h"

FHitReaction::FHitReaction() {
    this->ReactionDuration = 0.00f;
    this->SettleDuration = 0.00f;
    this->SlideTimeOffset = 0.00f;
    this->LandExtraTime = 0.00f;
    this->PushBackForce = 0.00f;
    this->ExtraPushBackHeight = 0.00f;
    this->ExtraAirDrag = 0.00f;
    this->ShouldTurnToFace = false;
    this->ForceOffGloop = false;
    this->EndsOnBack = false;
    this->RecoveryPose = EHitReactionRecoveryPose::Standing;
    this->FaceImpact = ESackboyHitReactionFacing::UseOldSystem;
    this->CanRecoverOffGround = false;
    this->BreakOutTime = 0.00f;
    this->AllowFurtherReactions = false;
    this->FollowedByInstantPop = false;
    this->ZeroVelocityOnEnter = false;
    this->FlattenImpactNormal = false;
    this->AllowCameraSplat = false;
    this->Recovery = ESackboyHitReactionRecovery::LargeRoll;
    this->ReactionAnim = ESackboyHitReactionAnim::Hit_Small;
    this->Emotion = ESackboyEmotionalState::Neutral;
    this->EmotionalLevel = 0;
    this->OnHitVibration = NULL;
    this->OnHitVibrationDelay = 0.00f;
    this->OnDeathVibration = NULL;
    this->OnDeathVibrationDelay = 0.00f;
}

