#include "SackboyBlueprintComponent_Base_VFX.h"

USackboyBlueprintComponent_Base_VFX::USackboyBlueprintComponent_Base_VFX(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DeathPS = NULL;
    this->DeathPopPS = NULL;
    this->CannonLaunchTrailPS = NULL;
    this->CannonLaunchTrailEmitterName = TEXT("PaperProps");
    this->RollSkidPS = NULL;
    this->RollSmashPS = NULL;
    this->RollDazePS = NULL;
    this->RegularRollPS = NULL;
    this->RegularRollSpawnRateParam = TEXT("SpawnRateRolling");
    this->RegularRollSpawnRateScaleMin = 0.05f;
    this->RegularRollSpawnRateScaleMax = 1.00f;
    this->SkidStopPS = NULL;
    this->BlasterThrustHandPS = NULL;
    this->BlasterThrustLeftHandSocket = TEXT("SackChain_LHand_Socket");
    this->BlasterThrustRightHandSocket = TEXT("SackChain_RHand_Socket");
    this->BlasterThrustFootPS = NULL;
    this->BlasterThrustLeftFootSocket = TEXT("LeftFootSocket");
    this->BlasterThrustRightFootSocket = TEXT("RightFootSocket");
    this->BlastersGroundTrailPS = NULL;
    this->BlastersGroundTrailEmitterName = TEXT("impact");
    this->BlastersFailPS = NULL;
    this->BlastersGroundPoundHandPS = NULL;
    this->LandingWhilstCarryingHeavyObjectParticleScale = 2.00f;
    this->LandingDustPS = NULL;
    this->LargeLandingDustPS = NULL;
    this->StompImpactPS = NULL;
    this->DamageImpactDirectionalPS = NULL;
    this->DamageImpactRadialPS = NULL;
    this->DamageImpactDoublePS = NULL;
    this->DamageFailedPS = NULL;
    this->HealthRestored = NULL;
    this->DamageTypeParticleDeathTime = 0.60f;
    this->SlapImpactRegularPS = NULL;
    this->SlapImpactSuperPS = NULL;
    this->SlapEffectLeftHandPS = NULL;
    this->SlapEffectRightHandPS = NULL;
    this->SlapChargedPS = NULL;
    this->SpinSlapActivePS = NULL;
    this->SpinSlapReversedActivePS = NULL;
    this->SpinSlapParticleDeathTime = 0.60f;
    this->DragonPunchRightPS = NULL;
    this->DragonPunchLeftPS = NULL;
    this->SpinningKickPS = NULL;
    this->FootDownRunPS = NULL;
    this->FootDownRunDustScaleParam = TEXT("Dust_Scale");
    this->FootDownGloopPS = NULL;
    this->FootStepGribbleEmitterPS = NULL;
    this->FootStepGribbleMaterialTable = NULL;
    this->RegularSlidePS = NULL;
    this->RegularSlideSpawnRateParam = TEXT("SpawnRate");
    this->RegularSlideDecayLifetime = 2.00f;
    this->RegularSlideSpeedThreshold = 15.00f;
    this->RegularSlideSpawnRateScaleMin = 0.05f;
    this->RegularSlideSpawnRateScaleMax = 1.00f;
    this->GloopHeightMaterialParamName = TEXT("GloopHeight");
    this->GloopHeight = 3.90f;
    this->GloopColorMaterialParamName = TEXT("GloopColor");
    this->GloopFakeReflectionColorMaterialParamName = TEXT("FakeReflectionColor");
    this->GloopMinOpacityMaterialParamName = TEXT("MinGloopOpacity");
    this->GloopRollPS = NULL;
    this->GrappleAttachPS = NULL;
    this->GrappleDetachPS = NULL;
    this->GrappleAttachFailedPS = NULL;
    this->GrappleTargetOutOfRangeGlintPS = NULL;
    this->WorldPositionSmoothingSpeed = 5.00f;
    this->SpeedSmoothingSpeed = 5.00f;
    this->EnvivonmentMaterialCollection = NULL;
    this->EnvivonmentSmoothLocationParams.AddDefaulted(4);
    this->EnvivonmentWorldLocationParams.AddDefaulted(4);
    this->RollBumpParticleSystem = NULL;
    this->SpinSlapComponent = NULL;
    this->SpinSlapToyComponent = NULL;
    this->BlasterThrustLeftHand = NULL;
    this->BlasterThrustRightHand = NULL;
    this->BlasterThrustLeftFoot = NULL;
    this->BlasterThrustRightFoot = NULL;
    this->BlastersGroundTrailFX = NULL;
    this->RegularSlide = NULL;
    this->RegularRoll = NULL;
    this->DamageVFX = NULL;
    this->DamagingWaterTableManager = NULL;
    this->FootStepGribbleEmitterComponent = NULL;
}

bool USackboyBlueprintComponent_Base_VFX::DeferredDestroyParticleComponent(UParticleSystemComponent* particle_system_component, bool Deactivate, float LifeTime) {
    return false;
}


