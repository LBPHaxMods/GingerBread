#include "ConfigSackboyBoomerang.h"

UConfigSackboyBoomerang::UConfigSackboyBoomerang() {
    this->MaximumTargetSearchDistance = 100.00f;
    this->SecondaryTargetingForwardOffset = -2.00f;
    this->SecondaryTargetingExclusionDistance = 1.00f;
    this->ThrownScale = 1.50f;
    this->ScaleBlend = 0.30f;
    this->InheritedVelocityDuration = 1.00f;
    this->RecentVelocityBlend = 0.50f;
    this->VerticalVelocityBlend = 0.25f;
    this->CatchDelay = 0.12f;
    this->MaxFlyingTime = 8.00f;
    this->MinRetrievalTime = 0.10f;
    this->ReboundThrowExtension = 0.40f;
    this->ForceMagnitude = 10.00f;
    this->ShowCraftCutterTime = 1.00f;
    this->EquipAnimTime = 0.10f;
    this->CatchAnimTime = 1.25f;
    this->HideAnimTime = 1.00f;
    this->TransferCraftCutterFromHandToBackTime = 0.35f;
    this->CatchSocket = TEXT("hand_R_CraftCutter");
    this->HandSocket = TEXT("hand_R_Socket");
    this->BodySocket = TEXT("body_CraftCutter");
    this->RollBoneName = TEXT("sternum01");
    this->RollRotation = 45.00f;
    this->HealthModifierDiscRadius = 2.00f;
    this->ThrowDistance = 60.00f;
    this->ThrowDuration = 0.50f;
    this->OffscreenTimeLimit = 0.05f;
    this->ThrowSpinSpeed = 360.00f;
    this->MaxTurnPerSecond = 720.00f;
    this->MinTurnPerSecond = 360.00f;
    this->TimeToMaxTurn = 0.10f;
    this->BlendToMaxTurnPower = 2.00f;
    this->EnableContextualSlap = false;
    this->BounceOffDuration = 0.03f;
    this->HoverSpinSpeed = 360.00f;
    this->HoverDuration = 0.02f;
    this->HoverTimeToStop = 0.01f;
    this->WhirlwindBlendDuration = 0.30f;
    this->ReturnSpeed = 120.00f;
    this->ReturnTimeToMaxSpeed = 0.80f;
    this->ReturnDuration = 0.40f;
    this->ReturnHeight = 5.00f;
    this->ReturnVelocityScale = 0.32f;
    this->ReturnPower = 0.75f;
    this->ReturnSpinSpeed = 720.00f;
    this->ReturnTurnInitialLimit = 0.50f;
    this->ReturnTurnFinalLimit = 8.00f;
    this->PrepareCatchDistance = 32.00f;
    this->CatchDistance = 5.50f;
    this->CatchSpeed = 100.00f;
    this->DebugDrawTarget = false;
}


